/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADBaseStyles, OADDefaultProperties;

@interface OADTheme : NSObject {
	OADBaseStyles *mBaseStyles;	// 4 = 0x4
	OADDefaultProperties *mShapeDefaults;	// 8 = 0x8
	OADDefaultProperties *mLineDefaults;	// 12 = 0xc
	OADDefaultProperties *mTextDefaults;	// 16 = 0x10
}
- (id)init;	// 0x378bd5d9
- (void)addDefaults;	// 0x37af9799
- (id)addLineDefaults;	// 0x378bf261
- (id)addShapeDefaults;	// 0x378bd8b1
- (id)addTextDefaults;	// 0x378bf2b1
- (id)baseStyles;	// 0x378c2a7d
- (void)dealloc;	// 0x3792e13d
- (id)lineDefaults;	// 0x37af9861
- (id)shapeDefaults;	// 0x378bf3a9
- (id)textDefaults;	// 0x378c27c9
@end

