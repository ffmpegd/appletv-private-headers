/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class GEOPlace, GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSMutableArray, GEOMapRegion, NSData, GEOLatLng, NSString;

@interface GEOProblem : PBCodable {
	XXStruct_3azwpD *_featureHandles;	// 4 = 0x4
	unsigned _featureHandlesCount;	// 8 = 0x8
	unsigned _featureHandlesSpace;	// 12 = 0xc
	XXStruct_t9EeIA _sessionID;	// 16 = 0x10
	XXStruct_WmZAAA _curlProblemTypes;	// 32 = 0x20
@private
	XXStruct_WmZAAA _pinProblemTypes;	// 44 = 0x2c
@protected
	XXStruct_WmZAAA _problemTypes;	// 56 = 0x38
	NSString *_comments;	// 68 = 0x44
	NSMutableArray *_correctedFields;	// 72 = 0x48
	NSString *_correctedLabelTitle;	// 76 = 0x4c
	GEOPlace *_correctedPlace;	// 80 = 0x50
	GEOLatLng *_correctedPosition;	// 84 = 0x54
	NSMutableArray *_directionsProblems;	// 88 = 0x58
	NSData *_directionsResponseID;	// 92 = 0x5c
	GEOMapRegion *_featureRegion;	// 96 = 0x60
	NSString *_httpInfo;	// 100 = 0x64
	NSString *_incorrectLabelTitle;	// 104 = 0x68
	float _mapZoomLevel;	// 108 = 0x6c
	GEOPlace *_originalPlace;	// 112 = 0x70
	GEOLatLng *_pinDrop;	// 116 = 0x74
	int _pinType;	// 120 = 0x78
	GEOPlaceSearchRequest *_placeSearchRequest;	// 124 = 0x7c
	GEOPlaceSearchResponse *_placeSearchResponse;	// 128 = 0x80
	GEOMapRegion *_region;	// 132 = 0x84
	NSString *_syslog;	// 136 = 0x88
	NSString *_tileStateLog;	// 140 = 0x8c
	NSMutableArray *_viewportImages;	// 144 = 0x90
	NSData *_viewportInfo;	// 148 = 0x94
	NSMutableArray *_visibleTileSets;	// 152 = 0x98
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 156 = 0x9c
}
@property(retain, nonatomic) NSString *comments;	// G=0x339a8255; S=0x339a8265; @synthesize=_comments
@property(retain, nonatomic) NSMutableArray *correctedFields;	// G=0x339a8345; S=0x339a8355; @synthesize=_correctedFields
@property(retain, nonatomic) NSString *correctedLabelTitle;	// G=0x339a8455; S=0x339a8465; @synthesize=_correctedLabelTitle
@property(retain, nonatomic) GEOPlace *correctedPlace;	// G=0x339a8235; S=0x339a8245; @synthesize=_correctedPlace
@property(retain, nonatomic) GEOLatLng *correctedPosition;	// G=0x339a8365; S=0x339a8375; @synthesize=_correctedPosition
@property(readonly, assign, nonatomic) int *curlProblemTypes;	// G=0x339a4769; 
@property(readonly, assign, nonatomic) unsigned curlProblemTypesCount;	// G=0x339a4755; 
@property(retain, nonatomic) NSMutableArray *directionsProblems;	// G=0x339a8495; S=0x339a84a5; @synthesize=_directionsProblems
@property(retain, nonatomic) NSData *directionsResponseID;	// G=0x339a83c5; S=0x339a83d5; @synthesize=_directionsResponseID
@property(readonly, assign, nonatomic) XXStruct_3azwpD *featureHandles;	// G=0x339a4a6d; 
@property(readonly, assign, nonatomic) unsigned featureHandlesCount;	// G=0x339a4a5d; 
@property(retain, nonatomic) GEOMapRegion *featureRegion;	// G=0x339a8475; S=0x339a8485; @synthesize=_featureRegion
@property(readonly, assign, nonatomic) BOOL hasComments;	// G=0x339a43e1; 
@property(readonly, assign, nonatomic) BOOL hasCorrectedLabelTitle;	// G=0x339a4a2d; 
@property(readonly, assign, nonatomic) BOOL hasCorrectedPlace;	// G=0x339a43c9; 
@property(readonly, assign, nonatomic) BOOL hasCorrectedPosition;	// G=0x339a4929; 
@property(readonly, assign, nonatomic) BOOL hasDirectionsResponseID;	// G=0x339a4971; 
@property(readonly, assign, nonatomic) BOOL hasFeatureRegion;	// G=0x339a4a45; 
@property(readonly, assign, nonatomic) BOOL hasHttpInfo;	// G=0x339a43f9; 
@property(readonly, assign, nonatomic) BOOL hasIncorrectLabelTitle;	// G=0x339a4a15; 
@property(assign, nonatomic) BOOL hasMapZoomLevel;	// G=0x339a4471; S=0x339a4451; 
@property(readonly, assign, nonatomic) BOOL hasOriginalPlace;	// G=0x339a4239; 
@property(readonly, assign, nonatomic) BOOL hasPinDrop;	// G=0x339a4635; 
@property(assign, nonatomic) BOOL hasPinType;	// G=0x339a49d1; S=0x339a49b1; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchRequest;	// G=0x339a4941; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchResponse;	// G=0x339a4959; 
@property(readonly, assign, nonatomic) BOOL hasRegion;	// G=0x339a4411; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x339a42ad; S=0x339a4291; 
@property(readonly, assign, nonatomic) BOOL hasSyslog;	// G=0x339a49e5; 
@property(readonly, assign, nonatomic) BOOL hasTileStateLog;	// G=0x339a49fd; 
@property(readonly, assign, nonatomic) BOOL hasViewportInfo;	// G=0x339a461d; 
@property(retain, nonatomic) NSString *httpInfo;	// G=0x339a8275; S=0x339a8285; @synthesize=_httpInfo
@property(retain, nonatomic) NSString *incorrectLabelTitle;	// G=0x339a8435; S=0x339a8445; @synthesize=_incorrectLabelTitle
@property(assign, nonatomic) float mapZoomLevel;	// G=0x339a82b5; S=0x339a4429; @synthesize=_mapZoomLevel
@property(retain, nonatomic) GEOPlace *originalPlace;	// G=0x339a81f1; S=0x339a8201; @synthesize=_originalPlace
@property(retain, nonatomic) GEOLatLng *pinDrop;	// G=0x339a8325; S=0x339a8335; @synthesize=_pinDrop
@property(readonly, assign, nonatomic) int *pinProblemTypes;	// G=0x339a4661; 
@property(readonly, assign, nonatomic) unsigned pinProblemTypesCount;	// G=0x339a464d; 
@property(assign, nonatomic) int pinType;	// G=0x339a83e5; S=0x339a4989; @synthesize=_pinType
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;	// G=0x339a8385; S=0x339a8395; @synthesize=_placeSearchRequest
@property(retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse;	// G=0x339a83a5; S=0x339a83b5; @synthesize=_placeSearchResponse
@property(readonly, assign, nonatomic) int *problemTypes;	// G=0x339a42d5; 
@property(readonly, assign, nonatomic) unsigned problemTypesCount;	// G=0x339a42c1; 
@property(retain, nonatomic) GEOMapRegion *region;	// G=0x339a8295; S=0x339a82a5; @synthesize=_region
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// G=0x339a8211; S=0x339a4251; @synthesize=_sessionID
@property(retain, nonatomic) NSString *syslog;	// G=0x339a83f5; S=0x339a8405; @synthesize=_syslog
@property(retain, nonatomic) NSString *tileStateLog;	// G=0x339a8415; S=0x339a8425; @synthesize=_tileStateLog
@property(retain, nonatomic) NSMutableArray *viewportImages;	// G=0x339a82e5; S=0x339a82f5; @synthesize=_viewportImages
@property(retain, nonatomic) NSData *viewportInfo;	// G=0x339a8305; S=0x339a8315; @synthesize=_viewportInfo
@property(retain, nonatomic) NSMutableArray *visibleTileSets;	// G=0x339a82c5; S=0x339a82d5; @synthesize=_visibleTileSets
- (void)addCorrectedField:(id)field;	// 0x339a487d
- (void)addCurlProblemType:(int)type;	// 0x339a478d
- (void)addDirectionsProblems:(id)problems;	// 0x339a4cf5
- (void)addFeatureHandle:(XXStruct_3azwpD)handle;	// 0x339a4ab9
- (void)addPinProblemType:(int)type;	// 0x339a4685
- (void)addProblemType:(int)type;	// 0x339a42f9
- (void)addViewportImages:(id)images;	// 0x339a4571
- (void)addVisibleTileSet:(id)set;	// 0x339a44a5
- (void)clearCorrectedFields;	// 0x339a485d
- (void)clearCurlProblemTypes;	// 0x339a4779
- (void)clearDirectionsProblems;	// 0x339a4cd5
- (void)clearFeatureHandles;	// 0x339a4a7d
- (void)clearPinProblemTypes;	// 0x339a4671
- (void)clearProblemTypes;	// 0x339a42e5
- (void)clearViewportImages;	// 0x339a4551
- (void)clearVisibleTileSets;	// 0x339a4485
// declared property getter: - (id)comments;	// 0x339a8255
- (void)copyTo:(id)to;	// 0x339a7041
- (id)correctedFieldAtIndex:(unsigned)index;	// 0x339a4909
// declared property getter: - (id)correctedFields;	// 0x339a8345
- (unsigned)correctedFieldsCount;	// 0x339a48e9
// declared property getter: - (id)correctedLabelTitle;	// 0x339a8455
// declared property getter: - (id)correctedPlace;	// 0x339a8235
// declared property getter: - (id)correctedPosition;	// 0x339a8365
- (int)curlProblemTypeAtIndex:(unsigned)index;	// 0x339a47a1
// declared property getter: - (int *)curlProblemTypes;	// 0x339a4769
// declared property getter: - (unsigned)curlProblemTypesCount;	// 0x339a4755
- (void)dealloc;	// 0x339a4031
- (id)description;	// 0x339a4da1
- (id)dictionaryRepresentation;	// 0x339a4e11
// declared property getter: - (id)directionsProblems;	// 0x339a8495
- (id)directionsProblemsAtIndex:(unsigned)index;	// 0x339a4d81
- (unsigned)directionsProblemsCount;	// 0x339a4d61
// declared property getter: - (id)directionsResponseID;	// 0x339a83c5
- (XXStruct_3azwpD)featureHandleAtIndex:(unsigned)index;	// 0x339a4bbd
// declared property getter: - (XXStruct_3azwpD *)featureHandles;	// 0x339a4a6d
// declared property getter: - (unsigned)featureHandlesCount;	// 0x339a4a5d
// declared property getter: - (id)featureRegion;	// 0x339a8475
// declared property getter: - (BOOL)hasComments;	// 0x339a43e1
// declared property getter: - (BOOL)hasCorrectedLabelTitle;	// 0x339a4a2d
// declared property getter: - (BOOL)hasCorrectedPlace;	// 0x339a43c9
// declared property getter: - (BOOL)hasCorrectedPosition;	// 0x339a4929
// declared property getter: - (BOOL)hasDirectionsResponseID;	// 0x339a4971
// declared property getter: - (BOOL)hasFeatureRegion;	// 0x339a4a45
// declared property getter: - (BOOL)hasHttpInfo;	// 0x339a43f9
// declared property getter: - (BOOL)hasIncorrectLabelTitle;	// 0x339a4a15
// declared property getter: - (BOOL)hasMapZoomLevel;	// 0x339a4471
// declared property getter: - (BOOL)hasOriginalPlace;	// 0x339a4239
// declared property getter: - (BOOL)hasPinDrop;	// 0x339a4635
// declared property getter: - (BOOL)hasPinType;	// 0x339a49d1
// declared property getter: - (BOOL)hasPlaceSearchRequest;	// 0x339a4941
// declared property getter: - (BOOL)hasPlaceSearchResponse;	// 0x339a4959
// declared property getter: - (BOOL)hasRegion;	// 0x339a4411
// declared property getter: - (BOOL)hasSessionID;	// 0x339a42ad
// declared property getter: - (BOOL)hasSyslog;	// 0x339a49e5
// declared property getter: - (BOOL)hasTileStateLog;	// 0x339a49fd
// declared property getter: - (BOOL)hasViewportInfo;	// 0x339a461d
- (unsigned)hash;	// 0x339a7e51
// declared property getter: - (id)httpInfo;	// 0x339a8275
// declared property getter: - (id)incorrectLabelTitle;	// 0x339a8435
- (BOOL)isEqual:(id)equal;	// 0x339a78c5
// declared property getter: - (float)mapZoomLevel;	// 0x339a82b5
// declared property getter: - (id)originalPlace;	// 0x339a81f1
// declared property getter: - (id)pinDrop;	// 0x339a8325
- (int)pinProblemTypeAtIndex:(unsigned)index;	// 0x339a4699
// declared property getter: - (int *)pinProblemTypes;	// 0x339a4661
// declared property getter: - (unsigned)pinProblemTypesCount;	// 0x339a464d
// declared property getter: - (int)pinType;	// 0x339a83e5
// declared property getter: - (id)placeSearchRequest;	// 0x339a8385
// declared property getter: - (id)placeSearchResponse;	// 0x339a83a5
- (int)problemTypeAtIndex:(unsigned)index;	// 0x339a430d
// declared property getter: - (int *)problemTypes;	// 0x339a42d5
// declared property getter: - (unsigned)problemTypesCount;	// 0x339a42c1
- (BOOL)readFrom:(id)from;	// 0x339a6409
// declared property getter: - (id)region;	// 0x339a8295
// declared property getter: - (XXStruct_t9EeIA)sessionID;	// 0x339a8211
// declared property setter: - (void)setComments:(id)comments;	// 0x339a8265
// declared property setter: - (void)setCorrectedFields:(id)fields;	// 0x339a8355
// declared property setter: - (void)setCorrectedLabelTitle:(id)title;	// 0x339a8465
// declared property setter: - (void)setCorrectedPlace:(id)place;	// 0x339a8245
// declared property setter: - (void)setCorrectedPosition:(id)position;	// 0x339a8375
- (void)setCurlProblemTypes:(int *)types count:(unsigned)count;	// 0x339a4845
// declared property setter: - (void)setDirectionsProblems:(id)problems;	// 0x339a84a5
// declared property setter: - (void)setDirectionsResponseID:(id)anId;	// 0x339a83d5
- (void)setFeatureHandles:(XXStruct_3azwpD *)handles count:(unsigned)count;	// 0x339a4c85
// declared property setter: - (void)setFeatureRegion:(id)region;	// 0x339a8485
// declared property setter: - (void)setHasMapZoomLevel:(BOOL)level;	// 0x339a4451
// declared property setter: - (void)setHasPinType:(BOOL)type;	// 0x339a49b1
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x339a4291
// declared property setter: - (void)setHttpInfo:(id)info;	// 0x339a8285
// declared property setter: - (void)setIncorrectLabelTitle:(id)title;	// 0x339a8445
// declared property setter: - (void)setMapZoomLevel:(float)level;	// 0x339a4429
// declared property setter: - (void)setOriginalPlace:(id)place;	// 0x339a8201
// declared property setter: - (void)setPinDrop:(id)drop;	// 0x339a8335
- (void)setPinProblemTypes:(int *)types count:(unsigned)count;	// 0x339a473d
// declared property setter: - (void)setPinType:(int)type;	// 0x339a4989
// declared property setter: - (void)setPlaceSearchRequest:(id)request;	// 0x339a8395
// declared property setter: - (void)setPlaceSearchResponse:(id)response;	// 0x339a83b5
- (void)setProblemTypes:(int *)types count:(unsigned)count;	// 0x339a43b1
// declared property setter: - (void)setRegion:(id)region;	// 0x339a82a5
// declared property setter: - (void)setSessionID:(XXStruct_t9EeIA)anId;	// 0x339a4251
// declared property setter: - (void)setSyslog:(id)syslog;	// 0x339a8405
// declared property setter: - (void)setTileStateLog:(id)log;	// 0x339a8425
// declared property setter: - (void)setViewportImages:(id)images;	// 0x339a82f5
// declared property setter: - (void)setViewportInfo:(id)info;	// 0x339a8315
// declared property setter: - (void)setVisibleTileSets:(id)sets;	// 0x339a82d5
// declared property getter: - (id)syslog;	// 0x339a83f5
// declared property getter: - (id)tileStateLog;	// 0x339a8415
// declared property getter: - (id)viewportImages;	// 0x339a82e5
- (id)viewportImagesAtIndex:(unsigned)index;	// 0x339a45fd
- (unsigned)viewportImagesCount;	// 0x339a45dd
// declared property getter: - (id)viewportInfo;	// 0x339a8305
- (id)visibleTileSetAtIndex:(unsigned)index;	// 0x339a4531
// declared property getter: - (id)visibleTileSets;	// 0x339a82c5
- (unsigned)visibleTileSetsCount;	// 0x339a4511
- (void)writeTo:(id)to;	// 0x339a6415
@end

