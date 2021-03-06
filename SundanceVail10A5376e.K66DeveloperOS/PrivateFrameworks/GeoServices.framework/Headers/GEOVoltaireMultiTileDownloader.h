/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class GEOTileKeyList, GEONetworkDataReader, NSMutableSet, NSURL, NSURLConnection, NSString, GEOTileKeyMap;
@protocol GEOVoltaireMultiTileDownloaderDelegate;

__attribute__((visibility("hidden")))
@interface GEOVoltaireMultiTileDownloader : NSObject <NSURLConnectionDelegate> {
	GEOTileKeyList *_keyList;	// 4 = 0x4
	GEOTileKeyList *_requiresLocalization;	// 8 = 0x8
	GEOTileKeyList *_receivedKeys;	// 12 = 0xc
	NSURL *_requestURL;	// 16 = 0x10
	BOOL _useStatusCodes;	// 20 = 0x14
	NSMutableSet *_errorCodes;	// 24 = 0x18
	NSURLConnection *_connection;	// 28 = 0x1c
	GEONetworkDataReader *_reader;	// 32 = 0x20
	NSString *_sharedPrefix;	// 36 = 0x24
	NSString *_userAgent;	// 40 = 0x28
	id<GEOVoltaireMultiTileDownloaderDelegate> _delegate;	// 44 = 0x2c
	unsigned short _providerID;	// 48 = 0x30
	GEOTileKeyMap *_baseTilesWaitingForLocalized;	// 52 = 0x34
	GEOTileKeyMap *_localizedTilesWaitingForBase;	// 56 = 0x38
	NSString *_postString;	// 60 = 0x3c
}
@property(assign, nonatomic) id<GEOVoltaireMultiTileDownloaderDelegate> delegate;	// G=0x37a34055; S=0x37a34065; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSURL *requestURL;	// G=0x37a34095; @synthesize=_requestURL
@property(assign, nonatomic) BOOL useStatusCodes;	// G=0x37a340a5; S=0x37a340b5; @synthesize=_useStatusCodes
@property(retain, nonatomic) NSString *userAgent;	// G=0x37a34075; S=0x37a34085; @synthesize=_userAgent
- (id)initWithURL:(id)url keyList:(id)list;	// 0x37a32601
- (void)_cancelWithError:(id)error;	// 0x37a32db9
- (void)_cleanupConnection;	// 0x37a32ced
- (void)_failWithError:(id)error;	// 0x37a32d85
- (id)_localizationURLForTileKey:(GEOTileKey *)tileKey;	// 0x37a32e11
- (id)_localizationURLIfNecessaryForTileKey:(GEOTileKey *)tileKey;	// 0x37a32f59
- (id)_mergeBaseTile:(id)tile withLocalizationTile:(id)localizationTile;	// 0x37a33405
- (GEOTileKey)_tileKeyForURL:(id)url edition:(unsigned *)edition isLocalized:(BOOL *)localized;	// 0x37a330dd
- (void)_tryParseTiles;	// 0x37a3340d
- (id)_urlForTileKey:(GEOTileKey *)tileKey;	// 0x37a32fad
- (void)cancel;	// 0x37a32cb1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x37a33f09
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x37a33af5
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x37a338f9
- (void)connectionDidFinishLoading:(id)connection;	// 0x37a33ba1
- (void)dealloc;	// 0x37a3269d
// declared property getter: - (id)delegate;	// 0x37a34055
- (void)logDownloadDetails;	// 0x37a33f71
// declared property getter: - (id)requestURL;	// 0x37a34095
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x37a34065
// declared property setter: - (void)setUseStatusCodes:(BOOL)codes;	// 0x37a340b5
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x37a34085
- (void)start;	// 0x37a32789
// declared property getter: - (BOOL)useStatusCodes;	// 0x37a340a5
// declared property getter: - (id)userAgent;	// 0x37a34075
@end

