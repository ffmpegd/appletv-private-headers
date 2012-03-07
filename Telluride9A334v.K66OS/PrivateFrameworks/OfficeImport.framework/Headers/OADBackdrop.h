/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class OADPoint3D, OADVector3D;

__attribute__((visibility("hidden")))
@interface OADBackdrop : NSObject <NSCopying> {
@private
	OADPoint3D *mAnchor;	// 4 = 0x4
	OADVector3D *mNormal;	// 8 = 0x8
	OADVector3D *mUp;	// 12 = 0xc
}
@property(retain) id anchor;	// G=0x3578e75d; S=0x3578edf9; converted property
@property(retain) id normal;	// G=0x3578e76d; S=0x3578edb9; converted property
@property(retain) id up;	// G=0x3578e77d; S=0x3578ed79; converted property
- (id)init;	// 0x3578ebc1
// converted property getter: - (id)anchor;	// 0x3578e75d
- (id)copyWithZone:(NSZone *)zone;	// 0x3578ee39
- (void)dealloc;	// 0x3578eeed
- (unsigned)hash;	// 0x3578ed21
- (BOOL)isEqual:(id)equal;	// 0x3578ec1d
// converted property getter: - (id)normal;	// 0x3578e76d
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x3578edf9
// converted property setter: - (void)setNormal:(id)normal;	// 0x3578edb9
// converted property setter: - (void)setUp:(id)up;	// 0x3578ed79
// converted property getter: - (id)up;	// 0x3578e77d
@end

