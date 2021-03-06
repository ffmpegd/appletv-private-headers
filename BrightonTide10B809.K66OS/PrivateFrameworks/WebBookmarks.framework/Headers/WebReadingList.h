/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSTimer, WebBookmarksServerProxy;

@interface WebReadingList : NSObject {
	WebBookmarksServerProxy *_serverProxy;	// 4 = 0x4
	NSMutableArray *_batchedReadingListItems;	// 8 = 0x8
	NSTimer *_batchTimer;	// 12 = 0xc
}
+ (BOOL)_isSupported;	// 0x35c4755d
+ (BOOL)_isSupportedReadingListURL:(id)url;	// 0x35c47579
+ (id)_trimmedPreviewText:(id)text;	// 0x35c47625
+ (id)_trimmedTitle:(id)title;	// 0x35c475ed
- (id)init;	// 0x35c47239
- (void)_batchTimerDidFire:(id)_batchTimer;	// 0x35c474a1
- (void)addReadingListItemWithURL:(id)url title:(id)title previewText:(id)text;	// 0x35c472a1
- (void)dealloc;	// 0x35c47511
@end

