/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MLPhotoDCFObject.h"
#import "MusicLibrary-Structs.h"

@class NSString, NSDate, MLPhotoDCFDirectory, NSMutableSet;

@interface MLPhotoDCFFileGroup : MLPhotoDCFObject {
@private
	id _delegate;	// 12 = 0xc
	MLPhotoDCFDirectory *_directory;	// 16 = 0x10
	NSString *_directoryPath;	// 20 = 0x14
	NSString *_prebakedThumbnailPath;	// 24 = 0x18
	NSString *_videoFileExtension;	// 28 = 0x1c
	NSMutableSet *_extensions;	// 32 = 0x20
	NSDate *_date;	// 36 = 0x24
	NSString *_preferredExtension;	// 40 = 0x28
	unsigned _hash;	// 44 = 0x2c
	unsigned _hashComputed : 1;	// 48 = 0x30
	unsigned _addedExtensions : 1;	// 48 = 0x30
	unsigned _writeIsPending : 1;	// 48 = 0x30
}
@property(retain) NSDate *date;	// G=0x31be45b9; S=0x31be4581; converted property
@property(assign) id delegate;	// G=0x31be3d4d; S=0x31be3d3d; converted property
@property(readonly, retain) MLPhotoDCFDirectory *directory;	// G=0x31be3d5d; converted property
@property(readonly, retain) NSMutableSet *extensions;	// G=0x31be443d; converted property
@property(readonly, assign) unsigned hash;	// G=0x31be46b9; converted property
+ (id)allMetadataFileExtensions;	// 0x31be4a99
+ (CGImageRef)createThumbnailOfImage:(CGImageRef)image format:(int)format fullPath:(id)path orientation:(int)orientation outThumbnailData:(id *)data;	// 0x31be4cf1
- (id)initWithName:(id)name number:(int)number directory:(id)directory;	// 0x31be4859
- (void)addExtension:(id)extension;	// 0x31be5575
- (void)addExtensionsFromMetadataDirectory;	// 0x31be53f9
- (int)compare:(id)compare;	// 0x31be4519
- (void)createMetadataDirectoryIfNecessary;	// 0x31be4349
- (void)createWildcatThumbnailsFromImage:(CGImageRef)image orientation:(int)orientation options:(id)options delegate:(id)delegate;	// 0x31be4b89
// converted property getter: - (id)date;	// 0x31be45b9
- (void)dealloc;	// 0x31be47a9
// converted property getter: - (id)delegate;	// 0x31be3d4d
- (void)deleteFiles;	// 0x31be51dd
- (void)deleteObsoleteFiles;	// 0x31be50ad
- (id)description;	// 0x31be4499
// converted property getter: - (id)directory;	// 0x31be3d5d
// converted property getter: - (id)extensions;	// 0x31be443d
- (void)forceAddExtensionsFromMetadataDirectory;	// 0x31be4471
- (BOOL)hasObsoleteFiles;	// 0x31be4f71
- (BOOL)hasPrebakedLandscapeScrubberThumbnails;	// 0x31be3ed9
- (BOOL)hasPrebakedPortraitScrubberThumbnails;	// 0x31be3e8d
- (BOOL)hasPrebakedThumbnail;	// 0x31be3f25
- (BOOL)hasPrebakedWildcatThumbnails;	// 0x31be3e41
- (BOOL)hasThumbnail;	// 0x31be3f71
- (BOOL)hasVideoFile;	// 0x31be3d8d
// converted property getter: - (unsigned)hash;	// 0x31be46b9
- (id)imageSourceTypeHint;	// 0x31be4711
- (BOOL)isEqual:(id)equal;	// 0x31be4639
- (BOOL)isValid;	// 0x31be45e5
- (BOOL)isValidImage;	// 0x31be4a45
- (BOOL)isWritePending;	// 0x31be3da1
- (id)lowResolutionFilename;	// 0x31be4151
- (id)pathForContainingDirectory;	// 0x31be3d6d
- (id)pathForFullSizeImage;	// 0x31be42fd
- (id)pathForGroupWithoutExtension;	// 0x31be4409
- (id)pathForLowResolutionFile;	// 0x31be3ff9
- (id)pathForMetadata;	// 0x31be43e1
- (id)pathForMetadataWithGroupName;	// 0x31be43ad
- (id)pathForPrebakedLandscapeScrubberThumbnails;	// 0x31be40ad
- (id)pathForPrebakedPortraitScrubberThumbnails;	// 0x31be4071
- (id)pathForPrebakedThumbnail;	// 0x31be3d7d
- (id)pathForPrebakedWildcatThumbnailsFile;	// 0x31be4035
- (id)pathForThumbnailFile;	// 0x31be40e9
- (id)pathForTrimmedVideoFile;	// 0x31be4259
- (id)pathForVideoFile;	// 0x31be42a1
- (id)pathForVideoPreviewFile;	// 0x31be3fbd
- (id)prebakedLandscapeScrubberThumbnailsFilename;	// 0x31be41d5
- (id)prebakedPortraitScrubberThumbnailsFilename;	// 0x31be41a9
- (id)prebakedThumbnailFilename;	// 0x31be4201
- (id)prebakedWildcatThumbnailsFilename;	// 0x31be417d
// converted property setter: - (void)setDate:(id)date;	// 0x31be4581
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31be3d3d
- (void)setWriteIsPending:(BOOL)pending;	// 0x31be3db5
- (id)thumbnailFilename;	// 0x31be422d
- (id)videoPreviewFilename;	// 0x31be4125
@end
