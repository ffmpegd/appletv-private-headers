/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSThread.h> // Unknown library

@class ContentDownloadData;
@protocol ContentHeaderDownloaderProtocol;

__attribute__((visibility("hidden")))
@interface ContentHeaderDownloader : NSThread {
@private
	ContentDownloadData *contentDownloadData;	// 52 = 0x34
	shared_ptr<netflix::http::HttpStreamReader> headerHttpReader;	// 56 = 0x38
	shared_ptr<netflix::http::HttpStreamReader> transportHttpReader;	// 64 = 0x40
	id<ContentHeaderDownloaderProtocol> delegate_;	// 72 = 0x48
}
@property(assign) id<ContentHeaderDownloaderProtocol> delegate;	// G=0x3336c89c; S=0x3336c8b0; @synthesize=delegate_
- (id)initWithContentDownloadData:(id)contentDownloadData delegate:(id)delegate;	// 0x3336c968
- (id).cxx_construct;	// 0x3336c8c4
- (void).cxx_destruct;	// 0x3336c918
- (void)dealloc;	// 0x3336e760
// declared property getter: - (id)delegate;	// 0x3336c89c
- (void)downloadContentHeader:(id)header;	// 0x3336cba4
- (const char *)mediaTypeToDLType:(int)dltype;	// 0x3336c840
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3336c8b0
@end

