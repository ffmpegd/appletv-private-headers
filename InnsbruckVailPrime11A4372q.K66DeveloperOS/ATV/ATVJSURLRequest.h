/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVJSObject.h"

@class NSMutableURLRequest;

__attribute__((visibility("hidden")))
@interface ATVJSURLRequest : XXUnknownSuperclass <ATVJSObject> {
	OpaqueJSValue *_jsObjectRef;	// 4 = 0x4
	NSMutableURLRequest *_urlRequest;	// 8 = 0x8
}
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x15bbe5; S=0x15bbf5; @synthesize=_jsObjectRef
@property(retain, nonatomic) NSMutableURLRequest *urlRequest;	// G=0x15bc05; S=0x15bc15; @synthesize=_urlRequest
- (id)initWithContext:(OpaqueJSContext *)context urlRequest:(id)request;	// 0x15b78d
- (void)_jsFinalize;	// 0x15bbd1
- (void)dealloc;	// 0x15bb85
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x15bbe5
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x15bbf5
// declared property setter: - (void)setUrlRequest:(id)request;	// 0x15bc15
// declared property getter: - (id)urlRequest;	// 0x15bc05
@end
