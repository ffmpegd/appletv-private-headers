/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "SSDownloadManagerObserver.h"
#import <NSOperation.h> // Unknown library

@class SSPurchase, SSPurchaseRequest, NSObject, MPPurchasableMediaDownload;
@protocol MPPurchasableMediaDownloadPurchaseOperationDelegate, OS_dispatch_queue;

@interface MPPurchasableMediaDownloadPurchaseOperation : NSOperation <SSDownloadManagerObserver> {
	NSObject<OS_dispatch_queue> *_accessQueue;	// 12 = 0xc
	SSPurchase *_purchase;	// 16 = 0x10
	SSPurchaseRequest *_purchaseRequest;	// 20 = 0x14
	MPPurchasableMediaDownload *_download;	// 24 = 0x18
	id<MPPurchasableMediaDownloadPurchaseOperationDelegate> _delegate;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) id<MPPurchasableMediaDownloadPurchaseOperationDelegate> delegate;	// G=0x36d74a59; @synthesize=_delegate
@property(readonly, assign, nonatomic) MPPurchasableMediaDownload *download;	// G=0x36d74a49; @synthesize=_download
@property(readonly, assign, nonatomic) SSPurchase *purchase;	// G=0x36d73371; 
- (id)initWithDownload:(id)download delegate:(id)delegate;	// 0x36d731b9
- (void)cancel;	// 0x36d7475d
- (void)dealloc;	// 0x36d732d1
// declared property getter: - (id)delegate;	// 0x36d74a59
// declared property getter: - (id)download;	// 0x36d74a49
- (void)main;	// 0x36d73535
// declared property getter: - (id)purchase;	// 0x36d73371
@end

