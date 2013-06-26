/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADFill, OADStroke;

@interface OADUnderline : NSObject {
	OADStroke *mStroke;	// 4 = 0x4
	OADFill *mFill;	// 8 = 0x8
	unsigned char mType;	// 12 = 0xc
	unsigned mIsUsingTextFill : 1;	// 13 = 0xd
	unsigned mIsUsingTextStroke : 1;	// 13 = 0xd
}
@property(retain) id fill;	// G=0x36a38a79; S=0x36c11119; converted property
@property(assign) BOOL isUsingTextFill;	// G=0x36c11155; S=0x369dddd9; converted property
@property(assign) BOOL isUsingTextStroke;	// G=0x36c1116d; S=0x369dddf9; converted property
@property(retain) id stroke;	// G=0x36c110cd; S=0x36c110dd; converted property
@property(assign) int type;	// G=0x36a45f75; S=0x369dde1d; converted property
- (id)initWithStroke:(id)stroke fill:(id)fill type:(int)type;	// 0x369cd4c9
- (void)dealloc;	// 0x369dde31
// converted property getter: - (id)fill;	// 0x36a38a79
- (unsigned)hash;	// 0x36c11181
- (BOOL)isEqual:(id)equal;	// 0x36a3892d
// converted property getter: - (BOOL)isUsingTextFill;	// 0x36c11155
// converted property getter: - (BOOL)isUsingTextStroke;	// 0x36c1116d
// converted property setter: - (void)setFill:(id)fill;	// 0x36c11119
// converted property setter: - (void)setIsUsingTextFill:(BOOL)fill;	// 0x369dddd9
// converted property setter: - (void)setIsUsingTextStroke:(BOOL)stroke;	// 0x369dddf9
// converted property setter: - (void)setStroke:(id)stroke;	// 0x36c110dd
// converted property setter: - (void)setType:(int)type;	// 0x369dde1d
// converted property getter: - (id)stroke;	// 0x36c110cd
// converted property getter: - (int)type;	// 0x36a45f75
@end
