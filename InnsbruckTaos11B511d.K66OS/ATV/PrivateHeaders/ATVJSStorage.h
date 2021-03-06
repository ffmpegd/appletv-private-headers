/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVJSContext;
@protocol ATVReadWriteFeedResource;

__attribute__((visibility("hidden")))
@interface ATVJSStorage : XXUnknownSuperclass {
	ATVJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_jsObjectRef;	// 8 = 0x8
	id<ATVReadWriteFeedResource> _resource;	// 12 = 0xc
}
@property(retain) ATVJSContext *context;	// G=0x16800d; S=0x168021; @synthesize=_context
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x168031; S=0x168041; @synthesize=_jsObjectRef
@property(retain, nonatomic) id<ATVReadWriteFeedResource> resource;	// G=0x168051; S=0x168061; @synthesize=_resource
- (id)initWithContext:(id)context jsContext:(OpaqueJSContext *)context2 resource:(id)resource;	// 0x167a59
// declared property getter: - (id)context;	// 0x16800d
- (void)dealloc;	// 0x167fa9
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x168031
// declared property getter: - (id)resource;	// 0x168051
// declared property setter: - (void)setContext:(id)context;	// 0x168021
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x168041
// declared property setter: - (void)setResource:(id)resource;	// 0x168061
@end

