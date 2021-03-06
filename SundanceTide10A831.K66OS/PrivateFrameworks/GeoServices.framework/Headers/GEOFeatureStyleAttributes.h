/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "GeoServices-Structs.h"


@interface GEOFeatureStyleAttributes : NSObject <NSCopying> {
	struct {
		unsigned key;
		int value;
	} v[16];	// 4 = 0x4
}
- (id)init;	// 0x30221ef5
- (id)copyWithZone:(NSZone *)zone;	// 0x3022f275
- (id)description;	// 0x302b7441
- (unsigned)hash;	// 0x302b740d
- (BOOL)isEqual:(id)equal;	// 0x302b73f5
- (BOOL)isFreeway;	// 0x302b7559
- (BOOL)isRamp;	// 0x302b7525
- (BOOL)isTunnel;	// 0x302b74f1
- (void)sort;	// 0x3022fe91
@end

