/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADGraphic.h"
#import "OfficeImport-Structs.h"

@class OADTextBody, OADShapeGeometry;

__attribute__((visibility("hidden")))
@interface OADShape : OADGraphic {
@private
	OADShapeGeometry *mGeometry;	// 28 = 0x1c
	OADTextBody *mTextBody;	// 32 = 0x20
}
@property(retain) id geometry;	// G=0x35128af1; S=0x351a11c5; converted property
@property(retain) id textBody;	// G=0x35129739; S=0x351a826d; converted property
- (id)init;	// 0x351301e5
- (void)createPresetGeometryWithShapeType:(int)shapeType;	// 0x353cc05d
- (void)dealloc;	// 0x351b2335
- (void)flattenProperties;	// 0x353cc141
// converted property getter: - (id)geometry;	// 0x35128af1
- (void)removeUnnecessaryOverrides;	// 0x351aae19
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x351a11c5
- (void)setParentTextListStyle:(id)style;	// 0x351aa8dd
// converted property setter: - (void)setTextBody:(id)body;	// 0x351a826d
- (id)shapeProperties;	// 0x35128b61
// converted property getter: - (id)textBody;	// 0x35129739
- (int)type;	// 0x35128a75
@end

