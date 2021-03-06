/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObject.h"
#import "NetflixNrdObjectProtocol.h"

@class NetflixNrdObjectCallback;

@interface NetflixMedia : NetflixNrdObject <NetflixNrdObjectProtocol> {
	NetflixNrdObjectCallback *nccpErrorListener_;	// 4 = 0x4
	NetflixNrdObjectCallback *nccpMediaListener_;	// 8 = 0x8
	NetflixNrdObjectCallback *nccpMediaExceptionListener_;	// 12 = 0xc
}
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpErrorListener;	// G=0x4a0569; S=0x4a0579; @synthesize=nccpErrorListener_
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpMediaExceptionListener;	// G=0x4a05d1; S=0x4a05e1; @synthesize=nccpMediaExceptionListener_
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpMediaListener;	// G=0x4a059d; S=0x4a05ad; @synthesize=nccpMediaListener_
+ (id)sharedInstance;	// 0x49f8bd
- (id)init;	// 0x49f9a9
- (void)addEventListener:(id)listener name:(id)name;	// 0x49fdf1
- (void)close;	// 0x4a0489
- (void)dealloc;	// 0x49fb01
- (BOOL)handleEvent:(id)event;	// 0x49fc29
- (void)handleMediaError:(id)error;	// 0x4a04f9
- (void)handleMediaException:(id)exception;	// 0x4a0531
- (void)handleNccpError:(id)error;	// 0x4a04c1
// declared property getter: - (id)nccpErrorListener;	// 0x4a0569
// declared property getter: - (id)nccpMediaExceptionListener;	// 0x4a05d1
// declared property getter: - (id)nccpMediaListener;	// 0x4a059d
- (void)open:(unsigned)open trackId:(unsigned)anId params:(id)params playbackType:(unsigned)type;	// 0x49fe81
- (void)pause:(int)pause;	// 0x4a01f9
- (void)play:(int)play;	// 0x4a0101
- (void)play:(int)play audioTrack:(int)track;	// 0x4a0115
- (void)removeEventListener:(id)listener name:(id)name;	// 0x49fe39
- (void)reposition:(int)reposition;	// 0x4a0341
// declared property setter: - (void)setNccpErrorListener:(id)listener;	// 0x4a0579
// declared property setter: - (void)setNccpMediaExceptionListener:(id)listener;	// 0x4a05e1
// declared property setter: - (void)setNccpMediaListener:(id)listener;	// 0x4a05ad
- (void)stop:(int)stop;	// 0x4a03e5
- (void)unpause:(int)unpause;	// 0x4a029d
@end

