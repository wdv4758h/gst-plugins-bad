/*
 * Copyright (C) 2015 Centricular Ltd.
 *   Author: Sebastian Dröge <sebastian@centricular.com>
 *   Author: Nirbheek Chauhan <nirbheek@centricular.com>
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice, this
 * list of conditions and the following disclaimer in the documentation and/or other
 * materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */

#ifndef __GST_PROXY_SINK_H__
#define __GST_PROXY_SINK_H__

#include <gst/gst.h>

G_BEGIN_DECLS

#define GST_TYPE_PROXY_SINK             (gst_proxy_sink_get_type())
#define GST_PROXY_SINK(obj)             (G_TYPE_CHECK_INSTANCE_CAST((obj), GST_TYPE_PROXY_SINK, GstProxySink))
#define GST_IS_PROXY_SINK(obj)          (G_TYPE_CHECK_INSTANCE_TYPE((obj), GST_TYPE_PROXY_SINK))
#define GST_PROXY_SINK_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST((klass) , GST_TYPE_PROXY_SINK, GstProxySinkClass))
#define GST_IS_PROXY_SINK_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE((klass) , GST_TYPE_PROXY_SINK))
#define GST_PROXY_SINK_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS((obj) , GST_TYPE_PROXY_SINK, GstProxySinkClass))

typedef struct _GstProxySink GstProxySink;
typedef struct _GstProxySinkClass GstProxySinkClass;
typedef struct _GstProxySinkPrivate GstProxySinkPrivate;

struct _GstProxySink {
  GstElement parent;

  /* < private > */
  GstProxySinkPrivate *priv;
  gpointer _gst_reserved[GST_PADDING];
};

struct _GstProxySinkClass {
  GstElementClass parent_class;
};

GType gst_proxy_sink_get_type (void);

G_END_DECLS

#endif /* __GST_PROXY_SINK_H__ */
