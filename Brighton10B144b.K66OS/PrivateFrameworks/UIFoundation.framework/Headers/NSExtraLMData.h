/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSRunStorage, NSTextContainer, NSMutableArray, NSLayoutManagerTextBlockRowArrayCache;

__attribute__((visibility("hidden")))
@interface NSExtraLMData : NSObject {
	NSRunStorage *_attachmentSizesRun;	// 4 = 0x4
	CGRect _currentAttachmentRect;	// 8 = 0x8
	unsigned _currentAttachmentIndex;	// 24 = 0x18
	id _fillHoleLock;	// 28 = 0x1c
	NSRunStorage *_fragmentRunsExtras;	// 32 = 0x20
	id _temporaryAttributes;	// 36 = 0x24
	NSTextContainer *_firstTextContainer;	// 40 = 0x28
	CFDictionaryRef _textContainerIndexes;	// 44 = 0x2c
	CFDictionaryRef _textContainerGlyphIndexes;	// 48 = 0x30
	int _typesetterBehavior;	// 52 = 0x34
	CGRect _cachedFontBounds;	// 56 = 0x38
	float _cachedUnderlineThickness;	// 72 = 0x48
	float _cachedUnderlinePosition;	// 76 = 0x4c
	float _cachedUnderlineAdjustment;	// 80 = 0x50
	NSRange _cachedUnderlineRange;	// 84 = 0x54
	NSMutableArray *_blockRunsArray;	// 92 = 0x5c
	float _hyphenationFactor;	// 96 = 0x60
	NSMutableArray *_insertionPointCache;	// 100 = 0x64
	NSGlyphTree _glyphTree;	// 104 = 0x68
	NSLayoutTree _layoutTree;	// 120 = 0x78
	NSRange _firstTextViewVisibleCharRange;	// 176 = 0xb0
	CGSize _firstTextViewVisibleOffset;	// 184 = 0xb8
	NSRange _lastInvalidatedCharRange;	// 192 = 0xc0
	float _lastInvalidatedLongitudinalPosition;	// 200 = 0xc8
	NSTextContainer *_lastInvalidatedTextContainer;	// 204 = 0xcc
	NSLayoutManagerTextBlockRowArrayCache *_rowArrayCache;	// 208 = 0xd0
	lmFlags2 _lmFlags2;	// 212 = 0xd4
}
@end

