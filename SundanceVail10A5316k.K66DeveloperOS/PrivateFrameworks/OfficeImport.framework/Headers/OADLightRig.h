/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class OADRotation3D;

__attribute__((visibility("hidden")))
@interface OADLightRig : NSObject <NSCopying> {
@private
	OADRotation3D *mRotation;	// 4 = 0x4
	int mType;	// 8 = 0x8
	int mDirection;	// 12 = 0xc
}
@property(assign) int direction;	// G=0x3125398d; S=0x31164e49; converted property
@property(retain) id rotation;	// G=0x3125396d; S=0x31164d4d; converted property
@property(assign) int type;	// G=0x3125397d; S=0x31164de1; converted property
- (id)init;	// 0x31164cf1
- (id)copyWithZone:(NSZone *)zone;	// 0x312538e1
- (void)dealloc;	// 0x31169f65
// converted property getter: - (int)direction;	// 0x3125398d
- (unsigned)hash;	// 0x3125399d
- (BOOL)isEqual:(id)equal;	// 0x312539e5
// converted property getter: - (id)rotation;	// 0x3125396d
// converted property setter: - (void)setDirection:(int)direction;	// 0x31164e49
// converted property setter: - (void)setRotation:(id)rotation;	// 0x31164d4d
// converted property setter: - (void)setType:(int)type;	// 0x31164de1
// converted property getter: - (int)type;	// 0x3125397d
@end

