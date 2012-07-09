/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <NSObject.h> // Unknown library

@class WebBookmarksServerProxy, NSTimer, NSMutableArray;

@interface WebReadingList : NSObject {
	WebBookmarksServerProxy *_serverProxy;	// 4 = 0x4
	NSMutableArray *_batchedReadingListItems;	// 8 = 0x8
	NSTimer *_batchTimer;	// 12 = 0xc
}
+ (BOOL)_isSupported;	// 0x32306445
+ (BOOL)_isSupportedReadingListURL:(id)url;	// 0x32306461
+ (id)_trimmedPreviewText:(id)text;	// 0x3230650d
+ (id)_trimmedTitle:(id)title;	// 0x323064d5
- (id)init;	// 0x323060c9
- (void)_batchTimerDidFire:(id)_batchTimer;	// 0x32306389
- (void)addReadingListItemWithURL:(id)url title:(id)title previewText:(id)text;	// 0x32306131
- (void)dealloc;	// 0x323063f9
@end
