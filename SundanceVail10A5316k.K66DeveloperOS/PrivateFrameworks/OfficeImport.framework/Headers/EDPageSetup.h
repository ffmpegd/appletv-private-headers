/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDPageSetup : NSObject {
@private
	int mOrientation;	// 4 = 0x4
	int mPageOrder;	// 8 = 0x8
	bool mCustomFirstPageNumber;	// 12 = 0xc
	unsigned mFirstPageNumber;	// 16 = 0x10
	unsigned mCopies;	// 20 = 0x14
	unsigned mFitToHeight;	// 24 = 0x18
	unsigned mFitToWidth;	// 28 = 0x1c
	unsigned mScale;	// 32 = 0x20
	float mLeftMargin;	// 36 = 0x24
	float mRightMargin;	// 40 = 0x28
	float mTopMargin;	// 44 = 0x2c
	float mBottomMargin;	// 48 = 0x30
	float mHeaderMargin;	// 52 = 0x34
	float mFooterMargin;	// 56 = 0x38
}
@property(assign) float bottomMargin;	// G=0x3122e655; S=0x310abd8d; converted property
@property(assign) bool customFirstPageNumber;	// G=0x3122e5d1; S=0x310abd2d; converted property
@property(assign) unsigned firstPageNumber;	// G=0x3122e5e5; S=0x310abd0d; converted property
@property(assign) unsigned fitToHeight;	// G=0x3122e5f5; S=0x310abd3d; converted property
@property(assign) unsigned fitToWidth;	// G=0x3122e605; S=0x310abd4d; converted property
@property(assign) float footerMargin;	// G=0x3122e675; S=0x310abdad; converted property
@property(assign) float headerMargin;	// G=0x3122e665; S=0x310abd9d; converted property
@property(assign) float leftMargin;	// G=0x3122e625; S=0x310abd5d; converted property
@property(assign) int order;	// G=0x3122e5c1; S=0x310abcfd; converted property
@property(assign) int orientation;	// G=0x3122e5b1; S=0x310abced; converted property
@property(assign) float rightMargin;	// G=0x3122e635; S=0x310abd6d; converted property
@property(assign) unsigned scale;	// G=0x3122e615; S=0x310abdbd; converted property
@property(assign) float topMargin;	// G=0x3122e645; S=0x310abd7d; converted property
+ (id)pageSetup;	// 0x310abbf5
- (id)init;	// 0x310abc3d
// converted property getter: - (float)bottomMargin;	// 0x3122e655
// converted property getter: - (bool)customFirstPageNumber;	// 0x3122e5d1
// converted property getter: - (unsigned)firstPageNumber;	// 0x3122e5e5
// converted property getter: - (unsigned)fitToHeight;	// 0x3122e5f5
// converted property getter: - (unsigned)fitToWidth;	// 0x3122e605
// converted property getter: - (float)footerMargin;	// 0x3122e675
// converted property getter: - (float)headerMargin;	// 0x3122e665
// converted property getter: - (float)leftMargin;	// 0x3122e625
// converted property getter: - (int)order;	// 0x3122e5c1
// converted property getter: - (int)orientation;	// 0x3122e5b1
// converted property getter: - (float)rightMargin;	// 0x3122e635
// converted property getter: - (unsigned)scale;	// 0x3122e615
// converted property setter: - (void)setBottomMargin:(float)margin;	// 0x310abd8d
// converted property setter: - (void)setCustomFirstPageNumber:(bool)number;	// 0x310abd2d
// converted property setter: - (void)setFirstPageNumber:(unsigned)number;	// 0x310abd0d
// converted property setter: - (void)setFitToHeight:(unsigned)height;	// 0x310abd3d
// converted property setter: - (void)setFitToWidth:(unsigned)width;	// 0x310abd4d
// converted property setter: - (void)setFooterMargin:(float)margin;	// 0x310abdad
// converted property setter: - (void)setHeaderMargin:(float)margin;	// 0x310abd9d
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x310abd5d
// converted property setter: - (void)setOrder:(int)order;	// 0x310abcfd
// converted property setter: - (void)setOrientation:(int)orientation;	// 0x310abced
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x310abd6d
// converted property setter: - (void)setScale:(unsigned)scale;	// 0x310abdbd
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x310abd7d
// converted property getter: - (float)topMargin;	// 0x3122e645
@end

