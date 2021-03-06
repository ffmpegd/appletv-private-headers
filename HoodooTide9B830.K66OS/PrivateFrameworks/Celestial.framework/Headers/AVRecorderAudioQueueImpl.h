/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import "AVRecorderImpl.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface AVRecorderAudioQueueImpl : NSObject <AVRecorderImpl> {
	BOOL _isActive;	// 4 = 0x4
	BOOL _isRecording;	// 5 = 0x5
	BOOL _isWriting;	// 6 = 0x6
	NSMutableDictionary *_attributes;	// 8 = 0x8
	unsigned long _fileType;	// 12 = 0xc
	unsigned long _audioCodec;	// 16 = 0x10
	long long _maxPCMFramesToRecord;	// 20 = 0x14
	BOOL _haveRecordedMaxPCMFrames;	// 28 = 0x1c
	AudioStreamBasicDescription _recordingFormat;	// 32 = 0x20
	OpaqueAudioFileID *_audioFile;	// 72 = 0x48
	OpaqueAudioQueue *_audioQueue;	// 76 = 0x4c
	unsigned long _numDeviceChannels;	// 80 = 0x50
	AudioQueueLevelMeterState *_audioLevels;	// 84 = 0x54
	AudioQueueLevelMeterState *_audioLevelsDB;	// 88 = 0x58
	unsigned long _totalBytesRecorded;	// 92 = 0x5c
	unsigned long _totalPacketsRecorded;	// 96 = 0x60
	unsigned long _totalFramesRecorded;	// 100 = 0x64
	AudioQueueBuffer *_buffers[3];	// 104 = 0x68
	BOOL _bufferUsed[3];	// 116 = 0x74
}
@property(retain) id filePath;	// G=0x3069df71; S=0x3069df19; converted property
@property(readonly, assign) BOOL isActive;	// G=0x3069e4a1; converted property
@property(readonly, assign) BOOL isRecording;	// G=0x3069e7c1; converted property
@property(assign) float micVolume;	// G=0x3069e7d1; S=0x3069e7f9; converted property
- (id)init;	// 0x3069dd35
- (id)initWithAttributes:(id)attributes;	// 0x3069dd71
- (BOOL)activate:(id *)activate;	// 0x3069e09d
- (id)attributeForKey:(id)key;	// 0x3069e07d
- (BOOL)audioCurrentAverageDecibelLevels:(float *)levels andPeakDecibelLevels:(float *)levels2;	// 0x3069e961
- (BOOL)audioCurrentAverageVolumeLevels:(float *)levels andPeakVolumeLevels:(float *)levels2;	// 0x3069e93d
- (BOOL)audioCurrentAverageVolumeLevels:(float *)levels andPeakVolumeLevels:(float *)levels2 useDB:(BOOL)db;	// 0x3069e865
- (unsigned)audioNumDeviceChannels;	// 0x3069e855
- (BOOL)autoFocusAtPoint:(CGPoint)point;	// 0x3069e4b5
- (void)copyEncoderCookieToFile;	// 0x3069e985
- (void)deactivate;	// 0x3069e3cd
- (void)dealloc;	// 0x3069de7d
// converted property getter: - (id)filePath;	// 0x3069df71
- (void)haveABuffer:(AudioQueueBuffer *)buffer withTimeStamp:(const AudioTimeStamp *)timeStamp andNumPackets:(unsigned long)packets andPacketDescs:(const AudioStreamPacketDescription *)descs;	// 0x3069ea31
// converted property getter: - (BOOL)isActive;	// 0x3069e4a1
// converted property getter: - (BOOL)isRecording;	// 0x3069e7c1
// converted property getter: - (float)micVolume;	// 0x3069e7d1
- (double)recordedDuration;	// 0x3069e821
- (long long)recordedFileSizeInBytes;	// 0x3069e80d
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x3069df9d
// converted property setter: - (void)setFilePath:(id)path;	// 0x3069df19
// converted property setter: - (void)setMicVolume:(float)volume;	// 0x3069e7f9
- (BOOL)start;	// 0x3069e4b9
- (void)stop;	// 0x3069e6c9
- (BOOL)takePhoto;	// 0x3069e4b1
@end

