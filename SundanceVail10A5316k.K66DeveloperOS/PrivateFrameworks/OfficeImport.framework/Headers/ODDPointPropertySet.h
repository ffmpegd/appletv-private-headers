/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ODDPointPropertySet : NSObject {
@private
	NSString *mLayoutTypeId;	// 4 = 0x4
	NSString *mPresentationName;	// 8 = 0x8
	NSString *mPresentationStyleLabel;	// 12 = 0xc
	int mPresentationStyleIndex;	// 16 = 0x10
	int mPresentationStyleCount;	// 20 = 0x14
	NSObject *mPresentationAssociatedId;	// 24 = 0x18
	BOOL mCustomVerticalFlip;	// 28 = 0x1c
	double mCustomScaleX;	// 32 = 0x20
	double mCustomScaleY;	// 40 = 0x28
	double mCustomOffsetX;	// 48 = 0x30
	double mCustomOffsetY;	// 56 = 0x38
}
@property(assign) double customOffsetX;	// G=0x31167401; S=0x31248391; converted property
@property(assign) double customOffsetY;	// G=0x31167419; S=0x312483a5; converted property
@property(assign) double customScaleX;	// G=0x311673d1; S=0x31248369; converted property
@property(assign) double customScaleY;	// G=0x311673e9; S=0x3124837d; converted property
@property(assign) BOOL customVerticalFlip;	// G=0x31248349; S=0x31248359; converted property
@property(retain) id layoutTypeId;	// G=0x311642b9; S=0x31162dd9; converted property
@property(retain) id presentationAssociatedId;	// G=0x31163df9; S=0x31163045; converted property
@property(retain) id presentationName;	// G=0x31167ced; S=0x31162e15; converted property
@property(assign) int presentationStyleCount;	// G=0x31248339; S=0x31163199; converted property
@property(assign) int presentationStyleIndex;	// G=0x31167d5d; S=0x311631a9; converted property
@property(retain) id presentationStyleLabel;	// G=0x31167cfd; S=0x31162e51; converted property
// converted property getter: - (double)customOffsetX;	// 0x31167401
// converted property getter: - (double)customOffsetY;	// 0x31167419
// converted property getter: - (double)customScaleX;	// 0x311673d1
// converted property getter: - (double)customScaleY;	// 0x311673e9
// converted property getter: - (BOOL)customVerticalFlip;	// 0x31248349
- (void)dealloc;	// 0x31169dc9
// converted property getter: - (id)layoutTypeId;	// 0x311642b9
// converted property getter: - (id)presentationAssociatedId;	// 0x31163df9
// converted property getter: - (id)presentationName;	// 0x31167ced
// converted property getter: - (int)presentationStyleCount;	// 0x31248339
// converted property getter: - (int)presentationStyleIndex;	// 0x31167d5d
// converted property getter: - (id)presentationStyleLabel;	// 0x31167cfd
// converted property setter: - (void)setCustomOffsetX:(double)x;	// 0x31248391
// converted property setter: - (void)setCustomOffsetY:(double)y;	// 0x312483a5
// converted property setter: - (void)setCustomScaleX:(double)x;	// 0x31248369
// converted property setter: - (void)setCustomScaleY:(double)y;	// 0x3124837d
// converted property setter: - (void)setCustomVerticalFlip:(BOOL)flip;	// 0x31248359
// converted property setter: - (void)setLayoutTypeId:(id)anId;	// 0x31162dd9
// converted property setter: - (void)setPresentationAssociatedId:(id)anId;	// 0x31163045
// converted property setter: - (void)setPresentationName:(id)name;	// 0x31162e15
// converted property setter: - (void)setPresentationStyleCount:(int)count;	// 0x31163199
// converted property setter: - (void)setPresentationStyleIndex:(int)index;	// 0x311631a9
// converted property setter: - (void)setPresentationStyleLabel:(id)label;	// 0x31162e51
@end

