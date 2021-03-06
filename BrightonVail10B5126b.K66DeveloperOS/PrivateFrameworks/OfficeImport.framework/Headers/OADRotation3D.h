/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"


@interface OADRotation3D : NSObject <NSCopying> {
	float mLatitude;	// 4 = 0x4
	float mLongitude;	// 8 = 0x8
	float mRevolution;	// 12 = 0xc
}
- (id)initWithLatitude:(float)latitude longitude:(float)longitude revolution:(float)revolution;	// 0x349603a9
- (id)copyWithZone:(NSZone *)zone;	// 0x34a45785
- (unsigned)hash;	// 0x34a457fd
- (BOOL)isEqual:(id)equal;	// 0x34a45851
- (float)latitude;	// 0x34a45755
- (float)longitude;	// 0x34a45765
- (float)revolution;	// 0x34a45775
@end

