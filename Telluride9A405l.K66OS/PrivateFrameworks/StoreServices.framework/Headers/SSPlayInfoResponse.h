/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSData, NSError;

@interface SSPlayInfoResponse : NSObject <SSCoding, NSCopying> {
@private
	NSError *_error;	// 4 = 0x4
	NSData *_playInfoData;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSError *error;	// G=0x3651fae5; @synthesize=_error
@property(readonly, assign, nonatomic) NSData *playInfoData;	// G=0x3651faf5; @synthesize=_playInfoData
- (id)initWithPlayInfoData:(id)playInfoData error:(id)error;	// 0x3651fa6d
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x3651f881
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x3651f951
- (id)copyPropertyListEncoding;	// 0x3651f7a5
- (id)copyWithZone:(NSZone *)zone;	// 0x3651f721
- (void *)copyXPCEncoding;	// 0x3651f84d
- (void)dealloc;	// 0x3651f6c1
- (id)description;	// 0x3651f98d
// declared property getter: - (id)error;	// 0x3651fae5
// declared property getter: - (id)playInfoData;	// 0x3651faf5
@end

