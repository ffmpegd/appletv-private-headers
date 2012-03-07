/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSObject.h> // Unknown library
#import "XPCObjects-Structs.h"
#import "NSCopying.h"

@class NSArray;
@protocol XPCProxyTarget;

@interface XPCProxy : NSObject <NSCopying> {
	xpc_connection_s *_connection;	// 4 = 0x4
	dispatch_queue_s *_queue;	// 8 = 0x8
	id<XPCProxyTarget> _target;	// 12 = 0xc
	Class _remoteClass;	// 16 = 0x10
	id _errorHandler;	// 20 = 0x14
	BOOL _invalidated;	// 24 = 0x18
	BOOL _useTraditionalEncoder;	// 25 = 0x19
	NSArray *_whitelistedClassNames;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) xpc_connection_s *connection;	// G=0x33392ff5; @synthesize=_connection
@property(copy) id errorHandler;	// G=0x33393d19; S=0x33393cf1; @synthesize=_errorHandler
@property(assign) Class remoteClass;	// G=0x33393005; S=0x33393015; @synthesize=_remoteClass
@property(assign) id<XPCProxyTarget> target;	// G=0x33393025; S=0x33393035; @synthesize=_target
@property(assign, nonatomic) BOOL useTraditionalEncoder;	// G=0x33392fd5; S=0x33392fe5; @synthesize=_useTraditionalEncoder
+ (void)initialize;	// 0x33393cbd
- (id)initWithConnection:(xpc_connection_s *)connection queue:(dispatch_queue_s *)queue target:(id)target;	// 0x3339353d
- (id)_errorForXpcError:(void *)xpcError;	// 0x333931c9
- (void)_getInvocationArgument:(void *)argument argumentType:(const char *)type class:(Class *)aClass forXpcArgument:(void *)xpcArgument message:(void *)message;	// 0x33394109
- (void)_handleInternalMessage:(void *)message;	// 0x33393d31
- (id)_invocationForMessage:(void *)message;	// 0x33394c35
- (BOOL)_messageIsInternal:(void *)internal;	// 0x33393dd5
- (void *)_newInternalMessageWithID:(int)anId;	// 0x33393dad
- (void *)_newMessageAndReplyHandler:(id *)handler forInvocation:(id)invocation;	// 0x33394919
- (void *)_newXpcArgumentForInvocationArgumentAt:(void *)at ofType:(const char *)type;	// 0x33394709
- (void *)_newXpcEncodingForObject:(id)object;	// 0x33393eed
- (id)_objectForXpcEncoding:(void *)xpcEncoding;	// 0x33393df5
- (id)_proxyDescription;	// 0x3339322d
// declared property getter: - (xpc_connection_s *)connection;	// 0x33392ff5
- (id)copyWithZone:(NSZone *)zone;	// 0x333932a5
- (void)dealloc;	// 0x33393c31
// declared property getter: - (id)errorHandler;	// 0x33393d19
- (void)forwardInvocation:(id)invocation;	// 0x33394e91
- (void)getProxyClassWithHandler:(id)handler;	// 0x33394f15
- (void)invalidate;	// 0x333939c1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x33393111
// declared property getter: - (Class)remoteClass;	// 0x33393005
- (void)restrictDecodingToWhitelistedClassNames:(id)whitelistedClassNames;	// 0x33393695
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x33393cf1
// declared property setter: - (void)setRemoteClass:(Class)aClass;	// 0x33393015
// declared property setter: - (void)setTarget:(id)target;	// 0x33393035
// declared property setter: - (void)setUseTraditionalEncoder:(BOOL)encoder;	// 0x33392fe5
// declared property getter: - (id)target;	// 0x33393025
// declared property getter: - (BOOL)useTraditionalEncoder;	// 0x33392fd5
@end

