/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import </libobjc.A.h>

@class NSError, SSDownloadHandlerSession, AVAsset, MPItemDownloadProperties;

@interface MPItemDownloadSession : NSObject {
	AVAsset *_asset;	// 4 = 0x4
	MPItemDownloadProperties *_downloadProperties;	// 8 = 0x8
	SSDownloadHandlerSession *_downloadSession;	// 12 = 0xc
	float _percentComplete;	// 16 = 0x10
	NSError *_sessionError;	// 20 = 0x14
	int _sessionState;	// 24 = 0x18
}
@property(assign, nonatomic) __weak AVAsset *AVAsset;	// G=0x2e3316f1; S=0x2e331711; @synthesize=_asset
@property(readonly, assign, nonatomic) MPItemDownloadProperties *downloadProperties;	// G=0x2e3313e1; 
@property(retain, nonatomic) SSDownloadHandlerSession *downloadSession;	// G=0x2e331725; S=0x2e331511; @synthesize=_downloadSession
@property(assign, nonatomic) float percentComplete;	// G=0x2e331735; S=0x2e331571; @synthesize=_percentComplete
@property(retain, nonatomic) NSError *sessionError;	// G=0x2e331745; S=0x2e331755; @synthesize=_sessionError
@property(assign, nonatomic) int sessionState;	// G=0x2e33177d; S=0x2e33178d; @synthesize=_sessionState
- (id)initWithItemDownloadProperties:(id)itemDownloadProperties;	// 0x2e331375
- (void).cxx_destruct;	// 0x2e33179d
// declared property getter: - (id)AVAsset;	// 0x2e3316f1
- (id)description;	// 0x2e331669
// declared property getter: - (id)downloadProperties;	// 0x2e3313e1
// declared property getter: - (id)downloadSession;	// 0x2e331725
- (BOOL)isNetworkConstrainedForNetworkType:(int)networkType;	// 0x2e33140d
// declared property getter: - (float)percentComplete;	// 0x2e331735
- (void)reloadNetworkConstraints;	// 0x2e3314f1
// declared property getter: - (id)sessionError;	// 0x2e331745
// declared property getter: - (int)sessionState;	// 0x2e33177d
// declared property setter: - (void)setAVAsset:(id)asset;	// 0x2e331711
// declared property setter: - (void)setDownloadSession:(id)session;	// 0x2e331511
// declared property setter: - (void)setPercentComplete:(float)complete;	// 0x2e331571
// declared property setter: - (void)setSessionError:(id)error;	// 0x2e331755
// declared property setter: - (void)setSessionState:(int)state;	// 0x2e33178d
- (void)snapshotProgressForItem:(id)item;	// 0x2e3315b9
@end
