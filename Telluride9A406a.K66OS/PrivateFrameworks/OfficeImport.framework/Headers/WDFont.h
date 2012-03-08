/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WDFont : NSObject <NSCopying> {
@private
	NSString *mName;	// 4 = 0x4
	NSString *mSecondName;	// 8 = 0x8
	int mFontFamily;	// 12 = 0xc
	int mCharacterSet;	// 16 = 0x10
	int mPitch;	// 20 = 0x14
}
@property(assign) int characterSet;	// G=0x32aa9bd9; S=0x32939035; converted property
@property(assign) int fontFamily;	// G=0x32aa9bc9; S=0x32939025; converted property
@property(retain) id name;	// G=0x32953fbd; S=0x32aa9bf9; converted property
@property(assign) int pitch;	// G=0x32aa9be9; S=0x32939015; converted property
@property(retain) id secondName;	// G=0x32aa9bb9; S=0x3293fb21; converted property
- (id)init;	// 0x32aa9e95
- (id)initWithName:(id)name;	// 0x32938f5d
// converted property getter: - (int)characterSet;	// 0x32aa9bd9
- (id)copyWithZone:(NSZone *)zone;	// 0x32aa9c39
- (void)dealloc;	// 0x328bf785
// converted property getter: - (int)fontFamily;	// 0x32aa9bc9
- (unsigned)hash;	// 0x32aa9e25
- (BOOL)isEqual:(id)equal;	// 0x32aa9ced
// converted property getter: - (id)name;	// 0x32953fbd
// converted property getter: - (int)pitch;	// 0x32aa9be9
// converted property getter: - (id)secondName;	// 0x32aa9bb9
// converted property setter: - (void)setCharacterSet:(int)set;	// 0x32939035
// converted property setter: - (void)setFontFamily:(int)family;	// 0x32939025
// converted property setter: - (void)setName:(id)name;	// 0x32aa9bf9
// converted property setter: - (void)setPitch:(int)pitch;	// 0x32939015
// converted property setter: - (void)setSecondName:(id)name;	// 0x3293fb21
@end
