/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaCollection.h"

@class ATVDataClient, BRImageManager, BRMediaCollectionType, ATVDataCollection, NSArray;

__attribute__((visibility("hidden")))
@interface BRStreamingPhotoCollection : BRPhotoMediaCollection {
	ATVDataCollection *_collection;	// 44 = 0x2c
	NSArray *_atvItems;	// 48 = 0x30
	ATVDataClient *_dataClient;	// 52 = 0x34
	NSArray *_assets;	// 56 = 0x38
	BRMediaCollectionType *_type;	// 60 = 0x3c
	BOOL _useForScreenSaver;	// 64 = 0x40
}
@property(readonly, retain) ATVDataClient *dataClient;	// G=0x2ac959; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x2ac989; 
@property(assign) BOOL useForScreenSaver;	// G=0x2ac979; S=0x2ac969; converted property
+ (id)collectionWithATVMediaCollection:(id)atvmediaCollection;	// 0x2abe2d
+ (id)collectionWithATVMediaItems:(id)atvmediaItems;	// 0x2abe69
- (id)initWithATVItems:(id)atvitems dataClient:(id)client;	// 0x2abf5d
- (id)initWithATVMediaCollection:(id)atvmediaCollection;	// 0x2abed1
- (id)initWithStreamingAssets:(id)streamingAssets dataClient:(id)client;	// 0x2abfcd
- (id)atvCollection;	// 0x2ac47d
- (id)collectionID;	// 0x2ac345
- (id)collectionName;	// 0x2ac725
- (id)collectionType;	// 0x2ac735
- (int)count;	// 0x2ac411
// converted property getter: - (id)dataClient;	// 0x2ac959
- (void)dealloc;	// 0x2ac03d
- (id)description;	// 0x2ac0cd
- (id)imageProxy;	// 0x2ac2e9
- (BOOL)isLibrary;	// 0x2ac8b5
- (BOOL)isLocal;	// 0x2ac875
- (id)keyAssetID;	// 0x2ac879
- (id)mediaAssets;	// 0x2ac48d
- (id)mediaTypes;	// 0x2ac915
- (id)photoAssets;	// 0x2ac675
// declared property getter: - (id)preferredImageManager;	// 0x2ac989
// converted property setter: - (void)setUseForScreenSaver:(BOOL)screenSaver;	// 0x2ac969
- (id)title;	// 0x2ac6e9
// converted property getter: - (BOOL)useForScreenSaver;	// 0x2ac979
@end

