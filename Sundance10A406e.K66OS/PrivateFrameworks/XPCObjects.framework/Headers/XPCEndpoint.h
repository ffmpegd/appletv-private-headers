/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@protocol OS_xpc_object;

@interface XPCEndpoint : NSObject <NSCoding> {
	NSObject<OS_xpc_object> *_endpoint;	// 4 = 0x4
}
@property(assign, nonatomic) NSObject<OS_xpc_object> *endpoint;	// G=0x36dabb41; S=0x36dabb51; @synthesize=_endpoint
- (id)init;	// 0x36dab835
- (id)initWithCoder:(id)coder;	// 0x36daba4d
- (id)initWithConnection:(id)connection;	// 0x36dab905
- (id)_initWithEndpoint:(id)endpoint;	// 0x36dab88d
- (id)createConnection;	// 0x36dab979
- (void)dealloc;	// 0x36dab935
- (void)encodeWithCoder:(id)coder;	// 0x36dab98d
// declared property getter: - (id)endpoint;	// 0x36dabb41
// declared property setter: - (void)setEndpoint:(id)endpoint;	// 0x36dabb51
@end

