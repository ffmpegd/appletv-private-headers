/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSDictionary.h> // Unknown library

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebElementDictionary : NSDictionary {
@private
	HitTestResult *_result;	// 4 = 0x4
	NSMutableDictionary *_cache;	// 8 = 0x8
	NSMutableSet *_nilValues;	// 12 = 0xc
	BOOL _cacheComplete;	// 16 = 0x10
}
+ (void)initialize;	// 0x34797049
+ (void)initializeLookupTable;	// 0x34797171
- (id)initWithHitTestResult:(const HitTestResult *)hitTestResult;	// 0x3479704d
- (id)_absoluteImageURL;	// 0x347b4855
- (id)_absoluteLinkURL;	// 0x347b451d
- (id)_absoluteMediaURL;	// 0x347b4765
- (id)_altDisplayString;	// 0x347b4a89
- (id)_domNode;	// 0x347b4ba5
- (void)_fillCache;	// 0x347b4da9
- (id)_image;	// 0x347b4945
- (id)_imageRect;	// 0x347b4129
- (id)_isContentEditable;	// 0x347b424d
- (id)_isInScrollBar;	// 0x347b4215
- (id)_isLiveLink;	// 0x347b4289
- (id)_isSelected;	// 0x347b4729
- (id)_spellingToolTip;	// 0x347b496d
- (id)_targetWebFrame;	// 0x347b44fd
- (id)_textContent;	// 0x347b42c5
- (id)_title;	// 0x347b460d
- (id)_titleDisplayString;	// 0x347b43e1
- (id)_webFrame;	// 0x347b41dd
- (unsigned)count;	// 0x347b4145
- (void)dealloc;	// 0x34797641
- (void)finalize;	// 0x347b4ddd
- (id)keyEnumerator;	// 0x347b4191
- (id)objectForKey:(id)key;	// 0x347b4bb9
@end

