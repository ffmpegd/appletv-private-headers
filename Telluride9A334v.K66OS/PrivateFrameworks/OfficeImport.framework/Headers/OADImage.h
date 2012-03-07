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
@property(retain) id geometry;	// G=0x35784505; S=0x35676ba5; converted property
@property(retain) id movie;	// G=0x355a76dd; S=0x356e30e1; converted property
@property(retain) id ole;	// G=0x356777a1; S=0x3563ad91; converted property
- (id)init;	// 0x355a2665
- (id)initWithBlipRef:(id)blipRef;	// 0x35784515
- (id)createImageFill;	// 0x357845e5
- (void)createPictureFramePresetGeometry;	// 0x35784765
- (void)dealloc;	// 0x3556ddc5
// converted property getter: - (id)geometry;	// 0x35784505
- (id)imageProperties;	// 0x3557623d
// converted property getter: - (id)movie;	// 0x355a76dd
// converted property getter: - (id)ole;	// 0x356777a1
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x35676ba5
// converted property setter: - (void)setMovie:(id)movie;	// 0x356e30e1
// converted property setter: - (void)setOle:(id)ole;	// 0x3563ad91
- (void)setParentTextListStyle:(id)style;	// 0x355a3d71
@end

