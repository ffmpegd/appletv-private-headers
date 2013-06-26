/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSMutableCopying.h"
#import </libobjc.A.h>
#import "SSXPCCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface SSSoftwareUpdatesContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying> {
	NSString *_clientIdentifierHeader;	// 4 = 0x4
	BOOL _forced;	// 8 = 0x8
	NSArray *_softwareTypes;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *clientIdentifierHeader;	// G=0x32801e71; @synthesize=_clientIdentifierHeader
@property(readonly, assign, nonatomic, getter=isForced) BOOL forced;	// G=0x32801e85; @synthesize=_forced
@property(readonly, assign, nonatomic) NSArray *softwareTypes;	// G=0x32801bad; @synthesize=_softwareTypes
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x32801c81
// declared property getter: - (id)clientIdentifierHeader;	// 0x32801e71
- (id)copyWithZone:(NSZone *)zone;	// 0x32801d41
- (id)copyXPCEncoding;	// 0x32801c21
- (void)dealloc;	// 0x32801b49
// declared property getter: - (BOOL)isForced;	// 0x32801e85
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32801dd9
// declared property getter: - (id)softwareTypes;	// 0x32801bad
@end
