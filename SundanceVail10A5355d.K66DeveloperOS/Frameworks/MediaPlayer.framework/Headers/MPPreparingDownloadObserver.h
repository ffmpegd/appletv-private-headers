/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaDownloadObserver.h"


@interface MPPreparingDownloadObserver : MPMediaDownloadObserver {
}
- (id)initWithMediaItemPersistentIdentifier:(id)mediaItemPersistentIdentifier;	// 0x3377bee5
- (void)_onQueue_invalidate;	// 0x3377bfb5
- (BOOL)canCancel;	// 0x3377bf59
- (void)cancelDownload;	// 0x3377bf5d
- (double)downloadProgress;	// 0x3377bf41
@end
