/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADStroke, OADFill;

__attribute__((visibility("hidden")))
@interface OADUnderline : NSObject {
@private
	OADStroke *mStroke;	// 4 = 0x4
	OADFill *mFill;	// 8 = 0x8
	unsigned char mType;	// 12 = 0xc
	unsigned mIsUsingTextFill : 1;	// 13 = 0xd
	unsigned mIsUsingTextStroke : 1;	// 13 = 0xd
}
@property(retain) id fill;	// G=0x34c05185; S=0x34e1c451; converted property
@property(assign) BOOL isUsingTextFill;	// G=0x34e1c391; S=0x34bff439; converted property
@property(assign) BOOL isUsingTextStroke;	// G=0x34e1c3ad; S=0x34bff455; converted property
@property(retain) id stroke;	// G=0x34e1c381; S=0x34e1c491; converted property
@property(assign) int type;	// G=0x34b85a11; S=0x34bff475; converted property
- (id)initWithStroke:(id)stroke fill:(id)fill type:(int)type;	// 0x34c29651
- (void)dealloc;	// 0x34c0a6c9
// converted property getter: - (id)fill;	// 0x34c05185
- (unsigned)hash;	// 0x34e1c3c9
- (BOOL)isEqual:(id)equal;	// 0x34c05031
// converted property getter: - (BOOL)isUsingTextFill;	// 0x34e1c391
// converted property getter: - (BOOL)isUsingTextStroke;	// 0x34e1c3ad
// converted property setter: - (void)setFill:(id)fill;	// 0x34e1c451
// converted property setter: - (void)setIsUsingTextFill:(BOOL)fill;	// 0x34bff439
// converted property setter: - (void)setIsUsingTextStroke:(BOOL)stroke;	// 0x34bff455
// converted property setter: - (void)setStroke:(id)stroke;	// 0x34e1c491
// converted property setter: - (void)setType:(int)type;	// 0x34bff475
// converted property getter: - (id)stroke;	// 0x34e1c381
// converted property getter: - (int)type;	// 0x34b85a11
@end

