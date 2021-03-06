/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class CMDrawableStyle, NSData, OADDrawable, NSString, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMDrawableMapper : CMMapper {
@private
	OADDrawable *mDrawable;	// 8 = 0x8
	CMDrawableStyle *mStyle;	// 12 = 0xc
	NSData *mImageBinaryData;	// 16 = 0x10
	NSString *mName;	// 20 = 0x14
	NSString *mExtension;	// 24 = 0x18
	int mResourceType;	// 28 = 0x1c
	NSString *mSourcePath;	// 32 = 0x20
	CGRect mBox;	// 36 = 0x24
	float mRotation;	// 52 = 0x34
	BOOL mIsSupported;	// 56 = 0x38
	BOOL mIsCropped;	// 57 = 0x39
	CGRect mUncroppedBox;	// 60 = 0x3c
	OADOrientedBounds *mOrientedBounds;	// 76 = 0x4c
}
@property(assign) float rotation;	// G=0x32cc5dd1; S=0x32cc5de1; converted property
- (id)initWithOadDrawable:(id)oadDrawable parent:(id)parent;	// 0x32b16525
- (id)initWithParent:(id)parent;	// 0x32c8d201
- (id)blipAtIndex:(unsigned)index;	// 0x32c0a899
- (CGRect)box;	// 0x32c0a91d
- (void)calculateUncroppedBox:(id)box;	// 0x32c22111
- (id)convertMetafileToPdf;	// 0x32bb1b15
- (void)dealloc;	// 0x32b164dd
- (BOOL)isCropped;	// 0x32c222e1
- (void)mapBounds;	// 0x32cc5df9
- (void)mapDrawingContext:(id)context at:(id)at relative:(BOOL)relative withState:(id)state;	// 0x32cc5e01
- (void)mapImageBinaryData;	// 0x32cc5df5
- (void)mapShapeGraphicsAt:(id)at withState:(id)state;	// 0x32c0aeb5
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x32cc5dfd
// converted property getter: - (float)rotation;	// 0x32cc5dd1
- (id)saveResourceAndReturnPath:(id)path withType:(int)type;	// 0x32babdc1
- (void)setBoundingBox;	// 0x32cc5df1
// converted property setter: - (void)setRotation:(float)rotation;	// 0x32cc5de1
- (void)setWithOadImage:(id)oadImage;	// 0x32bb1919
- (CGRect)shapeTextBoxRect;	// 0x32c4a5bd
- (CGRect)uncroppedBox;	// 0x32c7f115
@end

