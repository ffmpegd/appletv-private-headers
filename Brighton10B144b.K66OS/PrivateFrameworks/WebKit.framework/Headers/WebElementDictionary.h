/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSDictionary.h> // Unknown library

@class NSMutableDictionary, NSMutableSet;

@interface WebElementDictionary : NSDictionary {
	HitTestResult *_result;	// 4 = 0x4
	NSMutableDictionary *_cache;	// 8 = 0x8
	NSMutableSet *_nilValues;	// 12 = 0xc
	BOOL _cacheComplete;	// 16 = 0x10
}
+ (void)initialize;	// 0x365c0ddd
+ (void)initializeLookupTable;	// 0x365c0de1
- (id)initWithHitTestResult:(const HitTestResult *)hitTestResult;	// 0x365c103d
- (id)_absoluteImageURL;	// 0x365c1915
- (id)_absoluteLinkURL;	// 0x365c1d2d
- (id)_absoluteMediaURL;	// 0x365c1a59
- (id)_altDisplayString;	// 0x365c1641
- (id)_domNode;	// 0x365c15f5
- (void)_fillCache;	// 0x365c136d
- (id)_image;	// 0x365c18e9
- (id)_imageRect;	// 0x365c1911
- (id)_isContentEditable;	// 0x365c2175
- (id)_isInScrollBar;	// 0x365c21b1
- (id)_isLiveLink;	// 0x365c2139
- (id)_isSelected;	// 0x365c1b9d
- (id)_spellingToolTip;	// 0x365c1795
- (id)_targetWebFrame;	// 0x365c1e71
- (id)_textContent;	// 0x365c1fe5
- (id)_title;	// 0x365c1bd9
- (id)_titleDisplayString;	// 0x365c1e91
- (id)_webFrame;	// 0x365c1609
- (unsigned)count;	// 0x365c13b9
- (void)dealloc;	// 0x365c114d
- (void)finalize;	// 0x365c128d
- (id)keyEnumerator;	// 0x365c1405
- (id)objectForKey:(id)key;	// 0x365c1451
@end

