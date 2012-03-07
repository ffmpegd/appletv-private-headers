/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADFontScheme : NSObject {
@private
	NSMutableDictionary *mMajorFont;	// 4 = 0x4
	NSMutableDictionary *mMinorFont;	// 8 = 0x8
}
+ (void)addFontEntry:(id)entry script:(id)script typeface:(id)typeface;	// 0x30d6be79
- (id)init;	// 0x30c9fae9
- (void)dealloc;	// 0x30c71419
- (id)fontForFontSchemeRef:(id)fontSchemeRef;	// 0x30d9dea9
- (BOOL)isFontSchemeRef:(id)ref;	// 0x30be7681
- (id)majorFont;	// 0x30ca2e65
- (unsigned)majorFontCount;	// 0x30e84da1
- (id)majorTypefaceForScript:(id)script;	// 0x30d9e131
- (id)minorFont;	// 0x30ca3091
- (unsigned)minorFontCount;	// 0x30e84d81
- (id)minorTypefaceForScript:(id)script;	// 0x30d9df79
@end

