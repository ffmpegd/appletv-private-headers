/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSError, NSMutableData, NSLock, CDNDownloadData, NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface ContentDownloadData : NSObject {
@private
	BOOL ignore;	// 4 = 0x4
	NSLock *lock;	// 8 = 0x8
	CDNDownloadData *cdn;	// 12 = 0xc
	NSString *audioLanguageBCP47;	// 16 = 0x10
	NSString *downloadableId;	// 20 = 0x14
	unsigned bitRate;	// 24 = 0x18
	int trackIndex;	// 28 = 0x1c
	int streamIndex;	// 32 = 0x20
	unsigned sortedIndex;	// 36 = 0x24
	int contentProfile;	// 40 = 0x28
	NSString *url;	// 44 = 0x2c
	NSString *redirectedUrl;	// 48 = 0x30
	int state;	// 52 = 0x34
	int error;	// 56 = 0x38
	NSError *nsError;	// 60 = 0x3c
	BOOL failed;	// 64 = 0x40
	int httpStatusCode;	// 68 = 0x44
	int mediaType;	// 72 = 0x48
	double downloadStartTime;	// 76 = 0x4c
	double downloadEndTime;	// 84 = 0x54
	double playlistGenerateStartTime;	// 92 = 0x5c
	double playlistGenerateEndTime;	// 100 = 0x64
	double parseKeyStartTime;	// 108 = 0x6c
	double parseKeyEndTime;	// 116 = 0x74
	NSMutableString *moviePlaylist;	// 124 = 0x7c
	int movieDuration;	// 128 = 0x80
	int moviePeakBandwidth;	// 132 = 0x84
	int movieAverageBandwidth;	// 136 = 0x88
	NSMutableData *contentHeaderData;	// 140 = 0x8c
	int contentChunkStart;	// 144 = 0x90
	float m3u8ChunkRatio;	// 148 = 0x94
}
@property(readonly, retain, nonatomic) NSString *audioLanguageBCP47;	// G=0x360f1e28; @synthesize
@property(readonly, assign, nonatomic) unsigned bitRate;	// G=0x360f1dec; @synthesize
@property(readonly, retain, nonatomic) CDNDownloadData *cdn;	// G=0x360f1e78; @synthesize
@property(readonly, assign, nonatomic) int contentChunkStart;	// G=0x360f1af8; @synthesize
@property(readonly, retain, nonatomic) NSMutableData *contentHeaderData;	// G=0x360f1ae4; @synthesize
@property(readonly, assign, nonatomic) int contentProfile;	// G=0x360f1db0; @synthesize
@property(assign, nonatomic) double downloadEndTime;	// G=0x360f1c68; S=0x360f1c84; @synthesize
@property(assign, nonatomic) double downloadStartTime;	// G=0x360f1c9c; S=0x360f1cb8; @synthesize
@property(readonly, retain, nonatomic) NSString *downloadableId;	// G=0x360f1e3c; @synthesize
@property(assign, nonatomic) int error;	// G=0x360f1d38; S=0x360f1d4c; @synthesize
@property(assign, nonatomic) BOOL failed;	// G=0x360f1cf8; S=0x360f1d10; @synthesize
@property(assign, nonatomic) int httpStatusCode;	// G=0x360f1cd0; S=0x360f1ce4; @synthesize
@property(assign, nonatomic) BOOL ignore;	// G=0x360f1e8c; S=0x360f1ea4; @synthesize
@property(assign, nonatomic) NSLock *lock;	// G=0x360f1e50; S=0x360f1e64; @synthesize
@property(assign, nonatomic) float m3u8ChunkRatio;	// G=0x360f1abc; S=0x360f1ad0; @synthesize
@property(readonly, assign, nonatomic) int mediaType;	// G=0x360f1aa8; @synthesize
@property(assign, nonatomic) int movieAverageBandwidth;	// G=0x360f1b20; S=0x360f1b34; @synthesize
@property(assign, nonatomic) int movieDuration;	// G=0x360f1b70; S=0x360f1b84; @synthesize
@property(assign, nonatomic) int moviePeakBandwidth;	// G=0x360f1b48; S=0x360f1b5c; @synthesize
@property(readonly, retain, nonatomic) NSMutableString *moviePlaylist;	// G=0x360f1b0c; @synthesize
@property(retain, nonatomic) NSError *nsError;	// G=0x360f1d24; S=0x360f2020; @synthesize
@property(assign, nonatomic) double parseKeyEndTime;	// G=0x360f1b98; S=0x360f1bb4; @synthesize
@property(assign, nonatomic) double parseKeyStartTime;	// G=0x360f1bcc; S=0x360f1be8; @synthesize
@property(assign, nonatomic) double playlistGenerateEndTime;	// G=0x360f1c00; S=0x360f1c1c; @synthesize
@property(assign, nonatomic) double playlistGenerateStartTime;	// G=0x360f1c34; S=0x360f1c50; @synthesize
@property(readonly, retain, nonatomic) NSString *redirectedUrl;	// G=0x360f1d88; @synthesize
@property(assign, nonatomic) unsigned sortedIndex;	// G=0x360f1dc4; S=0x360f1dd8; @synthesize
@property(assign, nonatomic) int state;	// G=0x360f1d60; S=0x360f1d74; @synthesize
@property(readonly, assign, nonatomic) int streamIndex;	// G=0x360f1e00; @synthesize
@property(readonly, assign, nonatomic) int trackIndex;	// G=0x360f1e14; @synthesize
@property(readonly, retain, nonatomic) NSString *url;	// G=0x360f1d9c; @synthesize
- (id)initWithManifestStream:(const shared_ptr<netflix::ase::ManifestStream> *)manifestStream streamIndex:(int)index trackIndex:(int)index3 audioBCP47:(id)a47 cdnData:(id)data;	// 0x360f2234
// declared property getter: - (id)audioLanguageBCP47;	// 0x360f1e28
// declared property getter: - (unsigned)bitRate;	// 0x360f1dec
// declared property getter: - (id)cdn;	// 0x360f1e78
- (int)compareByDescendingBitRate:(id)rate;	// 0x360f2054
// declared property getter: - (int)contentChunkStart;	// 0x360f1af8
// declared property getter: - (id)contentHeaderData;	// 0x360f1ae4
// declared property getter: - (int)contentProfile;	// 0x360f1db0
- (void)dealloc;	// 0x360f1ec8
// declared property getter: - (double)downloadEndTime;	// 0x360f1c68
// declared property getter: - (double)downloadStartTime;	// 0x360f1c9c
// declared property getter: - (id)downloadableId;	// 0x360f1e3c
// declared property getter: - (int)error;	// 0x360f1d38
// declared property getter: - (BOOL)failed;	// 0x360f1cf8
// declared property getter: - (int)httpStatusCode;	// 0x360f1cd0
// declared property getter: - (BOOL)ignore;	// 0x360f1e8c
// declared property getter: - (id)lock;	// 0x360f1e50
// declared property getter: - (float)m3u8ChunkRatio;	// 0x360f1abc
// declared property getter: - (int)mediaType;	// 0x360f1aa8
// declared property getter: - (int)movieAverageBandwidth;	// 0x360f1b20
// declared property getter: - (int)movieDuration;	// 0x360f1b70
// declared property getter: - (int)moviePeakBandwidth;	// 0x360f1b48
// declared property getter: - (id)moviePlaylist;	// 0x360f1b0c
// declared property getter: - (id)nsError;	// 0x360f1d24
// declared property getter: - (double)parseKeyEndTime;	// 0x360f1b98
// declared property getter: - (double)parseKeyStartTime;	// 0x360f1bcc
// declared property getter: - (double)playlistGenerateEndTime;	// 0x360f1c00
// declared property getter: - (double)playlistGenerateStartTime;	// 0x360f1c34
// declared property getter: - (id)redirectedUrl;	// 0x360f1d88
- (void)setContentHeaderData:(id)data withChunkStart:(int)chunkStart;	// 0x360f21bc
// declared property setter: - (void)setDownloadEndTime:(double)time;	// 0x360f1c84
// declared property setter: - (void)setDownloadStartTime:(double)time;	// 0x360f1cb8
// declared property setter: - (void)setError:(int)error;	// 0x360f1d4c
// declared property setter: - (void)setFailed:(BOOL)failed;	// 0x360f1d10
// declared property setter: - (void)setHttpStatusCode:(int)code;	// 0x360f1ce4
// declared property setter: - (void)setIgnore:(BOOL)ignore;	// 0x360f1ea4
// declared property setter: - (void)setLock:(id)lock;	// 0x360f1e64
// declared property setter: - (void)setM3u8ChunkRatio:(float)ratio;	// 0x360f1ad0
// declared property setter: - (void)setMovieAverageBandwidth:(int)bandwidth;	// 0x360f1b34
// declared property setter: - (void)setMovieDuration:(int)duration;	// 0x360f1b84
// declared property setter: - (void)setMoviePeakBandwidth:(int)bandwidth;	// 0x360f1b5c
- (void)setMoviePlaylist:(id)playlist;	// 0x360f2158
// declared property setter: - (void)setNsError:(id)error;	// 0x360f2020
// declared property setter: - (void)setParseKeyEndTime:(double)time;	// 0x360f1bb4
// declared property setter: - (void)setParseKeyStartTime:(double)time;	// 0x360f1be8
// declared property setter: - (void)setPlaylistGenerateEndTime:(double)time;	// 0x360f1c1c
// declared property setter: - (void)setPlaylistGenerateStartTime:(double)time;	// 0x360f1c50
- (void)setRedirectedUrl:(id)url;	// 0x360f20d8
// declared property setter: - (void)setSortedIndex:(unsigned)index;	// 0x360f1dd8
// declared property setter: - (void)setState:(int)state;	// 0x360f1d74
// declared property getter: - (unsigned)sortedIndex;	// 0x360f1dc4
// declared property getter: - (int)state;	// 0x360f1d60
// declared property getter: - (int)streamIndex;	// 0x360f1e00
// declared property getter: - (int)trackIndex;	// 0x360f1e14
// declared property getter: - (id)url;	// 0x360f1d9c
@end

