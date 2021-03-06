/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface OADPoint3D : NSObject <NSCopying> {
@private
	float mX;	// 4 = 0x4
	float mY;	// 8 = 0x8
	float mZ;	// 12 = 0xc
}
- (id)initWithX:(float)x y:(float)y z:(float)z;	// 0x31380bad
- (id)copyWithZone:(NSZone *)zone;	// 0x31380a41
- (unsigned)hash;	// 0x31380665
- (BOOL)isEqual:(id)equal;	// 0x31380abd
- (float)x;	// 0x31380635
- (float)y;	// 0x31380645
- (float)z;	// 0x31380655
@end

