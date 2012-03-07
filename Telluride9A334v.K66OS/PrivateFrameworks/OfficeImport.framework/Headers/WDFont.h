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
@property(assign) int characterSet;	// G=0x3576dbd9; S=0x355fd035; converted property
@property(assign) int fontFamily;	// G=0x3576dbc9; S=0x355fd025; converted property
@property(retain) id name;	// G=0x35617fbd; S=0x3576dbf9; converted property
@property(assign) int pitch;	// G=0x3576dbe9; S=0x355fd015; converted property
@property(retain) id secondName;	// G=0x3576dbb9; S=0x35603b21; converted property
- (id)init;	// 0x3576de95
- (id)initWithName:(id)name;	// 0x355fcf5d
// converted property getter: - (int)characterSet;	// 0x3576dbd9
- (id)copyWithZone:(NSZone *)zone;	// 0x3576dc39
- (void)dealloc;	// 0x35583785
// converted property getter: - (int)fontFamily;	// 0x3576dbc9
- (unsigned)hash;	// 0x3576de25
- (BOOL)isEqual:(id)equal;	// 0x3576dced
// converted property getter: - (id)name;	// 0x35617fbd
// converted property getter: - (int)pitch;	// 0x3576dbe9
// converted property getter: - (id)secondName;	// 0x3576dbb9
// converted property setter: - (void)setCharacterSet:(int)set;	// 0x355fd035
// converted property setter: - (void)setFontFamily:(int)family;	// 0x355fd025
// converted property setter: - (void)setName:(id)name;	// 0x3576dbf9
// converted property setter: - (void)setPitch:(int)pitch;	// 0x355fd015
// converted property setter: - (void)setSecondName:(id)name;	// 0x35603b21
@end
