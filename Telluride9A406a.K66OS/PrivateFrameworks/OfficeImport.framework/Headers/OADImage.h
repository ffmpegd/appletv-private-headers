/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADGraphic.h"
#import "OfficeImport-Structs.h"

@class OADMovie, OADOle, OADShapeGeometry;

__attribute__((visibility("hidden")))
@interface OADImage : OADGraphic {
@private
	OADShapeGeometry *mGeometry;	// 28 = 0x1c
	OADOle *mOle;	// 32 = 0x20
	OADMovie *mMovie;	// 36 = 0x24
}
@property(retain) id geometry;	// G=0x32ac0505; S=0x329b2ba5; converted property
@property(retain) id movie;	// G=0x328e36dd; S=0x32a1f0e1; converted property
@property(retain) id ole;	// G=0x329b37a1; S=0x32976d91; converted property
- (id)init;	// 0x328de665
- (id)initWithBlipRef:(id)blipRef;	// 0x32ac0515
- (id)createImageFill;	// 0x32ac05e5
- (void)createPictureFramePresetGeometry;	// 0x32ac0765
- (void)dealloc;	// 0x328a9dc5
// converted property getter: - (id)geometry;	// 0x32ac0505
- (id)imageProperties;	// 0x328b223d
// converted property getter: - (id)movie;	// 0x328e36dd
// converted property getter: - (id)ole;	// 0x329b37a1
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x329b2ba5
// converted property setter: - (void)setMovie:(id)movie;	// 0x32a1f0e1
// converted property setter: - (void)setOle:(id)ole;	// 0x32976d91
- (void)setParentTextListStyle:(id)style;	// 0x328dfd71
@end
