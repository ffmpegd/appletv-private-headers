/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"


@interface TSUDuration : NSObject <NSCopying> {
	double mTimeInterval;	// 4 = 0x4
}
+ (id)durationWithTimeInterval:(double)timeInterval;	// 0x34af18e1
- (id)initWithTimeInterval:(double)timeInterval;	// 0x34af1931
- (id)copyWithZone:(NSZone *)zone;	// 0x34af1999
- (unsigned)hash;	// 0x34af1a59
- (BOOL)isEqual:(id)equal;	// 0x34af19ed
- (double)timeInterval;	// 0x34af1981
@end

