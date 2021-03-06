/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVMetadataItem.h"

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {
	AVChapterMetadataItemInternal *_privChapter;	// 8 = 0x8
}
- (id)init;	// 0x3256e2ad
- (void)_addFormatReaderLoaderNotifications;	// 0x3257028d
- (long)_chapterGroupIndex;	// 0x3256df11
- (long)_chapterIndex;	// 0x3256df2d
- (void)_ensureValueLoadedSync;	// 0x3256f549
- (id)_initWithFormatReaderLoader:(OpaqueFigFormatReaderLoader *)formatReaderLoader chapterGroupIndex:(long)index chapterIndex:(long)index3 chapterType:(id)type locale:(id)locale time:(XXStruct_pwHToB)time duration:(XXStruct_pwHToB)duration;	// 0x3256ff31
- (void)_removeFormatReaderLoaderNotifications;	// 0x32570181
- (void)_setValueStatus:(int)status figErrorCode:(long)code;	// 0x32570991
- (void)_takeValueFrom:(id)from;	// 0x32571175
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)keyDependsOnMetadataValue;	// 0x3256f251
- (int)_valueStatus;	// 0x325707a9
- (void)cancelLoading;	// 0x3256dfb1
- (id)commonKey;	// 0x3256de79
- (id)copyWithZone:(NSZone *)zone;	// 0x3256e299
- (void)dealloc;	// 0x32570699
- (id)description;	// 0x32571049
- (XXStruct_pwHToB)duration;	// 0x3256dee9
- (id)extraAttributes;	// 0x3256f2fd
- (void)finalize;	// 0x3257060d
- (id)key;	// 0x3256de5d
- (id)keySpace;	// 0x3256de95
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x3257081d
- (id)locale;	// 0x3256dea5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3256e171
- (void)release;	// 0x3256f369
- (id)retain;	// 0x3256f3bd
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x32570b0d
- (XXStruct_pwHToB)time;	// 0x3256dec1
- (id)value;	// 0x3256e125
@end

