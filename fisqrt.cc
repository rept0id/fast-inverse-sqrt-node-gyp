#include <node.h>
#include <v8.h>

using namespace v8;

float fisqrt(const double x) {
    double number = x;
    long i;
    float x2, y;
    const float threehalfs = 1.5F;

    x2 = number * 0.5F;
    y  = number;
    i  = * ( long * ) &y;
    i  = 0x5f3759df - ( i >> 1 );
    y  = * ( float * ) &i;
    y  = y * ( threehalfs - ( x2 * y * y ) );
    
    return y;
}

void gypFisqrt(const FunctionCallbackInfo<Value>& args) {
    Isolate* isolate = args.GetIsolate();

    /*** * Parameters * ***/

    // Parameters : length check

    if (args.Length() != 1) {
        isolate->ThrowException(Exception::TypeError(
            String::NewFromUtf8(isolate, "An argument was expected").ToLocalChecked()));
        return;
    }
    
    // Parameters : type check

    if (!args[0]->IsNumber()) {
        isolate->ThrowException(Exception::TypeError(
            String::NewFromUtf8(isolate, "Number expected").ToLocalChecked()));
        return;
    }
    
    // Parameters : "x"
    
    double x = args[0]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    
    /*** * Result * ***/
    
    double res = fisqrt(x);

    args.GetReturnValue().Set(Number::New(isolate, res));
}

void Initialize(Local<Object> exports) {
    NODE_SET_METHOD(exports, "fisqrt", gypFisqrt);
}

NODE_MODULE(fisqrt, Initialize)

