/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocument.h"
#import "RUIYTDocumentLoaderDelegate.h"

@class RUIYTDocumentLoader, RUIYTMediaAsset, YTAuthenticatedAccountPost, YTVideo;

__attribute__((visibility("hidden")))
@interface RUIYTCommunityFeaturesDocument : RUIYTDocument <RUIYTDocumentLoaderDelegate> {
	YTAuthenticatedAccountPost *_request;	// 4 = 0x4
	RUIYTDocumentLoader *_documentLoader;	// 8 = 0x8
	RUIYTMediaAsset *_asset;	// 12 = 0xc
}
@property(retain, nonatomic) RUIYTMediaAsset *asset;	// G=0x274089; S=0x274099; @synthesize=_asset
@property(retain, nonatomic) RUIYTDocumentLoader *documentLoader;	// G=0x274051; S=0x274061; @synthesize=_documentLoader
@property(retain, nonatomic) YTAuthenticatedAccountPost *request;	// G=0x274019; S=0x274029; @synthesize=_request
@property(readonly, assign, nonatomic) YTVideo *video;	// G=0x273b1d; 
- (id)initWithAsset:(id)asset;	// 0x273945
- (void).cxx_destruct;	// 0x2740c1
- (void)YTAuthenticatedAccountPost:(id)post didFinishWithType:(int)type error:(id)error;	// 0x273b71
- (BOOL)_shouldSilentlyIgnoreError:(id)error type:(int)type;	// 0x273fa5
// declared property getter: - (id)asset;	// 0x274089
- (void)dealloc;	// 0x273a89
// declared property getter: - (id)documentLoader;	// 0x274051
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x273e09
// declared property getter: - (id)request;	// 0x274019
// declared property setter: - (void)setAsset:(id)asset;	// 0x274099
// declared property setter: - (void)setDocumentLoader:(id)loader;	// 0x274061
// declared property setter: - (void)setRequest:(id)request;	// 0x274029
// declared property getter: - (id)video;	// 0x273b1d
@end
