/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import </libobjc.A.h>

@class WBReadingListPrivate;
@protocol OS_dispatch_queue;

@interface WBReadingList : NSObject {
	WBReadingListPrivate *_private;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
}
+ (id)defaultReadingList;	// 0x32e514a1
+ (BOOL)supportsURL:(id)url;	// 0x32e51489
- (id)init;	// 0x32e51545
- (id)_init;	// 0x32e5158d
- (BOOL)addReadingListItemWithURL:(id)url title:(id)title previewText:(id)text error:(id *)error;	// 0x32e51679
- (void)dealloc;	// 0x32e51615
@end

