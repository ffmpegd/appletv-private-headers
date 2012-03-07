/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import <NSObject.h> // Unknown library

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDRun : NSObject <EDKeyedObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mCharIndex;	// 8 = 0x8
	unsigned mFontIndex;	// 12 = 0xc
}
@property(assign) unsigned charIndex;	// G=0x355de051; S=0x35732f25; converted property
@property(retain) id font;	// G=0x355de061; S=0x35648cb5; converted property
@property(assign) unsigned fontIndex;	// G=0x356b4d91; S=0x35732f35; converted property
+ (id)runWithCharIndex:(unsigned)charIndex font:(id)font resources:(id)resources;	// 0x35648c19
+ (id)runWithCharIndex:(unsigned)charIndex fontIndex:(unsigned)index resources:(id)resources;	// 0x355c5ce9
+ (id)runWithResources:(id)resources;	// 0x35732f45
- (id)initWithCharIndex:(unsigned)charIndex font:(id)font resources:(id)resources;	// 0x35648c71
- (id)initWithCharIndex:(unsigned)charIndex fontIndex:(unsigned)index resources:(id)resources;	// 0x355c5d41
- (id)initWithResources:(id)resources;	// 0x355c5d81
// converted property getter: - (unsigned)charIndex;	// 0x355de051
// converted property getter: - (id)font;	// 0x355de061
// converted property getter: - (unsigned)fontIndex;	// 0x356b4d91
- (BOOL)isEqual:(id)equal;	// 0x356cc235
- (BOOL)isEqualToRun:(id)run;	// 0x356cc291
- (unsigned)key;	// 0x355c5ee1
// converted property setter: - (void)setCharIndex:(unsigned)index;	// 0x35732f25
// converted property setter: - (void)setFont:(id)font;	// 0x35648cb5
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x35732f35
@end

