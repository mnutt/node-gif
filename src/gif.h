#ifndef NODE_GIF_H
#define NODE_GIF_H

#include <node.h>
#include <node_buffer.h>

#include "common.h"

class Gif : public node::ObjectWrap {
    int width, height;
    node::Buffer *data;
    buffer_type buf_type;

public:
    static void Initialize(v8::Handle<v8::Object> target);
    Gif(node::Buffer *ddata, int wwidth, int hheight, buffer_type bbuf_type);
    v8::Handle<v8::Value> GifEncode();

    static v8::Handle<v8::Value> New(const v8::Arguments &args);
    static v8::Handle<v8::Value> GifEncode(const v8::Arguments &args);
};

#endif
