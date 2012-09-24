/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "ICCameraFile.h"

@class NSString;

@interface MSCameraFile : ICCameraFile {
	void *_msCameraFileProperties;	// 12 = 0xc
}
@property(assign) int bitsPerPixel;	// G=0x305ff2e5; S=0x305ff2f9; 
@property(copy) NSString *exifCreationDateTime;	// G=0x305ff14d; S=0x305ff161; 
@property(copy) NSString *exifModificationDateTime;	// G=0x305ff1a1; S=0x305ff1b5; 
@property(readonly, assign) timespec fsCreationTime;	// G=0x305ff0e1; 
@property(readonly, assign) timespec fsModificationTime;	// G=0x305ff0f9; 
@property(readonly, assign) unsigned long long fsSN;	// G=0x305ff0cd; 
@property(readonly, assign) long long fsSize;	// G=0x305ff111; 
@property(assign) int imgHeight;	// G=0x305ff2bd; S=0x305ff2d1; 
@property(assign) int imgWidth;	// G=0x305ff295; S=0x305ff2a9; 
@property(assign) int thmHeight;	// G=0x305ff26d; S=0x305ff281; 
@property(assign) int thmOffset;	// G=0x305ff21d; S=0x305ff231; 
@property(assign) int thmSize;	// G=0x305ff1f5; S=0x305ff209; 
@property(assign) int thmWidth;	// G=0x305ff245; S=0x305ff259; 
@property(assign) unsigned type;	// G=0x305ff125; S=0x305ff139; 
@property(assign) BOOL updatedBasicMetadata;	// G=0x305ff30d; S=0x305ff321; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device fsSN:(unsigned long long)sn fsCreationTime:(timespec)time fsModificationTime:(timespec)time6 fsSize:(long long)size fsFlags:(unsigned)flags;	// 0x305fef81
// declared property getter: - (int)bitsPerPixel;	// 0x305ff2e5
- (void)dealloc;	// 0x305ff005
// declared property getter: - (id)exifCreationDateTime;	// 0x305ff14d
// declared property getter: - (id)exifModificationDateTime;	// 0x305ff1a1
- (void)finalize;	// 0x305ff069
// declared property getter: - (timespec)fsCreationTime;	// 0x305ff0e1
// declared property getter: - (timespec)fsModificationTime;	// 0x305ff0f9
// declared property getter: - (unsigned long long)fsSN;	// 0x305ff0cd
// declared property getter: - (long long)fsSize;	// 0x305ff111
// declared property getter: - (int)imgHeight;	// 0x305ff2bd
// declared property getter: - (int)imgWidth;	// 0x305ff295
- (id)metadataDict;	// 0x3060003d
// declared property setter: - (void)setBitsPerPixel:(int)pixel;	// 0x305ff2f9
// declared property setter: - (void)setExifCreationDateTime:(id)time;	// 0x305ff161
// declared property setter: - (void)setExifModificationDateTime:(id)time;	// 0x305ff1b5
// declared property setter: - (void)setImgHeight:(int)height;	// 0x305ff2d1
// declared property setter: - (void)setImgWidth:(int)width;	// 0x305ff2a9
// declared property setter: - (void)setThmHeight:(int)height;	// 0x305ff281
// declared property setter: - (void)setThmOffset:(int)offset;	// 0x305ff231
// declared property setter: - (void)setThmSize:(int)size;	// 0x305ff209
// declared property setter: - (void)setThmWidth:(int)width;	// 0x305ff259
// declared property setter: - (void)setType:(unsigned)type;	// 0x305ff139
// declared property setter: - (void)setUpdatedBasicMetadata:(BOOL)metadata;	// 0x305ff321
// declared property getter: - (int)thmHeight;	// 0x305ff26d
// declared property getter: - (int)thmOffset;	// 0x305ff21d
// declared property getter: - (int)thmSize;	// 0x305ff1f5
// declared property getter: - (int)thmWidth;	// 0x305ff245
- (id)thumbData;	// 0x305ff49d
// declared property getter: - (unsigned)type;	// 0x305ff125
- (void)updateBasicMetadata;	// 0x30600551
// declared property getter: - (BOOL)updatedBasicMetadata;	// 0x305ff30d
- (long)writeDataToFile:(int)file fromOffset:(long long)offset ofLength:(long long *)length;	// 0x305ff335
@end
