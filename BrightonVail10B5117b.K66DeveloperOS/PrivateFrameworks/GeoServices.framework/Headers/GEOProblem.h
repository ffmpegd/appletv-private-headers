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
	XXStruct_WmZAAA _pinProblemTypes;	// 44 = 0x2c
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
	NSString *_preferredSearchDisplayLocation;	// 132 = 0x84
	unsigned _preferredSearchResultIndex;	// 136 = 0x88
	unsigned _problematicSearchResultIndex;	// 140 = 0x8c
	GEOMapRegion *_region;	// 144 = 0x90
	NSString *_syslog;	// 148 = 0x94
	NSString *_tileStateLog;	// 152 = 0x98
	NSMutableArray *_viewportImages;	// 156 = 0x9c
	NSData *_viewportInfo;	// 160 = 0xa0
	NSMutableArray *_visibleTileSets;	// 164 = 0xa4
	struct {
		unsigned sessionID : 1;
		unsigned mapZoomLevel : 1;
		unsigned pinType : 1;
		unsigned preferredSearchResultIndex : 1;
		unsigned problematicSearchResultIndex : 1;
	} _has;	// 168 = 0xa8
}
@property(retain, nonatomic) NSString *comments;	// G=0x341daba5; S=0x341dabb5; @synthesize=_comments
@property(retain, nonatomic) NSMutableArray *correctedFields;	// G=0x341dac95; S=0x341daca5; @synthesize=_correctedFields
@property(retain, nonatomic) NSString *correctedLabelTitle;	// G=0x341dada5; S=0x341dadb5; @synthesize=_correctedLabelTitle
@property(retain, nonatomic) GEOPlace *correctedPlace;	// G=0x341dab85; S=0x341dab95; @synthesize=_correctedPlace
@property(retain, nonatomic) GEOLatLng *correctedPosition;	// G=0x341dacb5; S=0x341dacc5; @synthesize=_correctedPosition
@property(readonly, assign, nonatomic) int *curlProblemTypes;	// G=0x341d6b5d; 
@property(readonly, assign, nonatomic) unsigned curlProblemTypesCount;	// G=0x341d6b49; 
@property(retain, nonatomic) NSMutableArray *directionsProblems;	// G=0x341dade5; S=0x341dadf5; @synthesize=_directionsProblems
@property(retain, nonatomic) NSData *directionsResponseID;	// G=0x341dad15; S=0x341dad25; @synthesize=_directionsResponseID
@property(readonly, assign, nonatomic) XXStruct_3azwpD *featureHandles;	// G=0x341d6e61; 
@property(readonly, assign, nonatomic) unsigned featureHandlesCount;	// G=0x341d6e51; 
@property(retain, nonatomic) GEOMapRegion *featureRegion;	// G=0x341dadc5; S=0x341dadd5; @synthesize=_featureRegion
@property(readonly, assign, nonatomic) BOOL hasComments;	// G=0x341d67d5; 
@property(readonly, assign, nonatomic) BOOL hasCorrectedLabelTitle;	// G=0x341d6e21; 
@property(readonly, assign, nonatomic) BOOL hasCorrectedPlace;	// G=0x341d67bd; 
@property(readonly, assign, nonatomic) BOOL hasCorrectedPosition;	// G=0x341d6d1d; 
@property(readonly, assign, nonatomic) BOOL hasDirectionsResponseID;	// G=0x341d6d65; 
@property(readonly, assign, nonatomic) BOOL hasFeatureRegion;	// G=0x341d6e39; 
@property(readonly, assign, nonatomic) BOOL hasHttpInfo;	// G=0x341d67ed; 
@property(readonly, assign, nonatomic) BOOL hasIncorrectLabelTitle;	// G=0x341d6e09; 
@property(assign, nonatomic) BOOL hasMapZoomLevel;	// G=0x341d6865; S=0x341d6845; 
@property(readonly, assign, nonatomic) BOOL hasOriginalPlace;	// G=0x341d662d; 
@property(readonly, assign, nonatomic) BOOL hasPinDrop;	// G=0x341d6a29; 
@property(assign, nonatomic) BOOL hasPinType;	// G=0x341d6dc5; S=0x341d6da5; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchRequest;	// G=0x341d6d35; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchResponse;	// G=0x341d6d4d; 
@property(readonly, assign, nonatomic) BOOL hasPreferredSearchDisplayLocation;	// G=0x341d724d; 
@property(assign, nonatomic) BOOL hasPreferredSearchResultIndex;	// G=0x341d7239; S=0x341d7219; 
@property(assign, nonatomic) BOOL hasProblematicSearchResultIndex;	// G=0x341d71dd; S=0x341d71bd; 
@property(readonly, assign, nonatomic) BOOL hasRegion;	// G=0x341d6805; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x341d66a1; S=0x341d6685; 
@property(readonly, assign, nonatomic) BOOL hasSyslog;	// G=0x341d6dd9; 
@property(readonly, assign, nonatomic) BOOL hasTileStateLog;	// G=0x341d6df1; 
@property(readonly, assign, nonatomic) BOOL hasViewportInfo;	// G=0x341d6a11; 
@property(retain, nonatomic) NSString *httpInfo;	// G=0x341dabc5; S=0x341dabd5; @synthesize=_httpInfo
@property(retain, nonatomic) NSString *incorrectLabelTitle;	// G=0x341dad85; S=0x341dad95; @synthesize=_incorrectLabelTitle
@property(assign, nonatomic) float mapZoomLevel;	// G=0x341dac05; S=0x341d681d; @synthesize=_mapZoomLevel
@property(retain, nonatomic) GEOPlace *originalPlace;	// G=0x341dab41; S=0x341dab51; @synthesize=_originalPlace
@property(retain, nonatomic) GEOLatLng *pinDrop;	// G=0x341dac75; S=0x341dac85; @synthesize=_pinDrop
@property(readonly, assign, nonatomic) int *pinProblemTypes;	// G=0x341d6a55; 
@property(readonly, assign, nonatomic) unsigned pinProblemTypesCount;	// G=0x341d6a41; 
@property(assign, nonatomic) int pinType;	// G=0x341dad35; S=0x341d6d7d; @synthesize=_pinType
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;	// G=0x341dacd5; S=0x341dace5; @synthesize=_placeSearchRequest
@property(retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse;	// G=0x341dacf5; S=0x341dad05; @synthesize=_placeSearchResponse
@property(retain, nonatomic) NSString *preferredSearchDisplayLocation;	// G=0x341dae25; S=0x341dae35; @synthesize=_preferredSearchDisplayLocation
@property(assign, nonatomic) unsigned preferredSearchResultIndex;	// G=0x341dae15; S=0x341d71f1; @synthesize=_preferredSearchResultIndex
@property(readonly, assign, nonatomic) int *problemTypes;	// G=0x341d66c9; 
@property(readonly, assign, nonatomic) unsigned problemTypesCount;	// G=0x341d66b5; 
@property(assign, nonatomic) unsigned problematicSearchResultIndex;	// G=0x341dae05; S=0x341d7195; @synthesize=_problematicSearchResultIndex
@property(retain, nonatomic) GEOMapRegion *region;	// G=0x341dabe5; S=0x341dabf5; @synthesize=_region
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// G=0x341dab61; S=0x341d6645; @synthesize=_sessionID
@property(retain, nonatomic) NSString *syslog;	// G=0x341dad45; S=0x341dad55; @synthesize=_syslog
@property(retain, nonatomic) NSString *tileStateLog;	// G=0x341dad65; S=0x341dad75; @synthesize=_tileStateLog
@property(retain, nonatomic) NSMutableArray *viewportImages;	// G=0x341dac35; S=0x341dac45; @synthesize=_viewportImages
@property(retain, nonatomic) NSData *viewportInfo;	// G=0x341dac55; S=0x341dac65; @synthesize=_viewportInfo
@property(retain, nonatomic) NSMutableArray *visibleTileSets;	// G=0x341dac15; S=0x341dac25; @synthesize=_visibleTileSets
- (void)addCorrectedField:(id)field;	// 0x341d6c71
- (void)addCurlProblemType:(int)type;	// 0x341d6b81
- (void)addDirectionsProblems:(id)problems;	// 0x341d70e9
- (void)addFeatureHandle:(XXStruct_3azwpD)handle;	// 0x341d6ead
- (void)addPinProblemType:(int)type;	// 0x341d6a79
- (void)addProblemType:(int)type;	// 0x341d66ed
- (void)addViewportImages:(id)images;	// 0x341d6965
- (void)addVisibleTileSet:(id)set;	// 0x341d6899
- (void)clearCorrectedFields;	// 0x341d6c51
- (void)clearCurlProblemTypes;	// 0x341d6b6d
- (void)clearDirectionsProblems;	// 0x341d70c9
- (void)clearFeatureHandles;	// 0x341d6e71
- (void)clearPinProblemTypes;	// 0x341d6a65
- (void)clearProblemTypes;	// 0x341d66d9
- (void)clearViewportImages;	// 0x341d6945
- (void)clearVisibleTileSets;	// 0x341d6879
// declared property getter: - (id)comments;	// 0x341daba5
- (void)copyTo:(id)to;	// 0x341d97b9
- (id)correctedFieldAtIndex:(unsigned)index;	// 0x341d6cfd
// declared property getter: - (id)correctedFields;	// 0x341dac95
- (unsigned)correctedFieldsCount;	// 0x341d6cdd
// declared property getter: - (id)correctedLabelTitle;	// 0x341dada5
// declared property getter: - (id)correctedPlace;	// 0x341dab85
// declared property getter: - (id)correctedPosition;	// 0x341dacb5
- (int)curlProblemTypeAtIndex:(unsigned)index;	// 0x341d6b95
// declared property getter: - (int *)curlProblemTypes;	// 0x341d6b5d
// declared property getter: - (unsigned)curlProblemTypesCount;	// 0x341d6b49
- (void)dealloc;	// 0x341d6411
- (id)description;	// 0x341d7265
- (id)dictionaryRepresentation;	// 0x341d72d5
// declared property getter: - (id)directionsProblems;	// 0x341dade5
- (id)directionsProblemsAtIndex:(unsigned)index;	// 0x341d7175
- (unsigned)directionsProblemsCount;	// 0x341d7155
// declared property getter: - (id)directionsResponseID;	// 0x341dad15
- (XXStruct_3azwpD)featureHandleAtIndex:(unsigned)index;	// 0x341d6fb1
// declared property getter: - (XXStruct_3azwpD *)featureHandles;	// 0x341d6e61
// declared property getter: - (unsigned)featureHandlesCount;	// 0x341d6e51
// declared property getter: - (id)featureRegion;	// 0x341dadc5
// declared property getter: - (BOOL)hasComments;	// 0x341d67d5
// declared property getter: - (BOOL)hasCorrectedLabelTitle;	// 0x341d6e21
// declared property getter: - (BOOL)hasCorrectedPlace;	// 0x341d67bd
// declared property getter: - (BOOL)hasCorrectedPosition;	// 0x341d6d1d
// declared property getter: - (BOOL)hasDirectionsResponseID;	// 0x341d6d65
// declared property getter: - (BOOL)hasFeatureRegion;	// 0x341d6e39
// declared property getter: - (BOOL)hasHttpInfo;	// 0x341d67ed
// declared property getter: - (BOOL)hasIncorrectLabelTitle;	// 0x341d6e09
// declared property getter: - (BOOL)hasMapZoomLevel;	// 0x341d6865
// declared property getter: - (BOOL)hasOriginalPlace;	// 0x341d662d
// declared property getter: - (BOOL)hasPinDrop;	// 0x341d6a29
// declared property getter: - (BOOL)hasPinType;	// 0x341d6dc5
// declared property getter: - (BOOL)hasPlaceSearchRequest;	// 0x341d6d35
// declared property getter: - (BOOL)hasPlaceSearchResponse;	// 0x341d6d4d
// declared property getter: - (BOOL)hasPreferredSearchDisplayLocation;	// 0x341d724d
// declared property getter: - (BOOL)hasPreferredSearchResultIndex;	// 0x341d7239
// declared property getter: - (BOOL)hasProblematicSearchResultIndex;	// 0x341d71dd
// declared property getter: - (BOOL)hasRegion;	// 0x341d6805
// declared property getter: - (BOOL)hasSessionID;	// 0x341d66a1
// declared property getter: - (BOOL)hasSyslog;	// 0x341d6dd9
// declared property getter: - (BOOL)hasTileStateLog;	// 0x341d6df1
// declared property getter: - (BOOL)hasViewportInfo;	// 0x341d6a11
- (unsigned)hash;	// 0x341da729
// declared property getter: - (id)httpInfo;	// 0x341dabc5
// declared property getter: - (id)incorrectLabelTitle;	// 0x341dad85
- (BOOL)isEqual:(id)equal;	// 0x341da0f9
// declared property getter: - (float)mapZoomLevel;	// 0x341dac05
// declared property getter: - (id)originalPlace;	// 0x341dab41
// declared property getter: - (id)pinDrop;	// 0x341dac75
- (int)pinProblemTypeAtIndex:(unsigned)index;	// 0x341d6a8d
// declared property getter: - (int *)pinProblemTypes;	// 0x341d6a55
// declared property getter: - (unsigned)pinProblemTypesCount;	// 0x341d6a41
// declared property getter: - (int)pinType;	// 0x341dad35
// declared property getter: - (id)placeSearchRequest;	// 0x341dacd5
// declared property getter: - (id)placeSearchResponse;	// 0x341dacf5
// declared property getter: - (id)preferredSearchDisplayLocation;	// 0x341dae25
// declared property getter: - (unsigned)preferredSearchResultIndex;	// 0x341dae15
- (int)problemTypeAtIndex:(unsigned)index;	// 0x341d6701
// declared property getter: - (int *)problemTypes;	// 0x341d66c9
// declared property getter: - (unsigned)problemTypesCount;	// 0x341d66b5
// declared property getter: - (unsigned)problematicSearchResultIndex;	// 0x341dae05
- (BOOL)readFrom:(id)from;	// 0x341d8b21
// declared property getter: - (id)region;	// 0x341dabe5
// declared property getter: - (XXStruct_t9EeIA)sessionID;	// 0x341dab61
// declared property setter: - (void)setComments:(id)comments;	// 0x341dabb5
// declared property setter: - (void)setCorrectedFields:(id)fields;	// 0x341daca5
// declared property setter: - (void)setCorrectedLabelTitle:(id)title;	// 0x341dadb5
// declared property setter: - (void)setCorrectedPlace:(id)place;	// 0x341dab95
// declared property setter: - (void)setCorrectedPosition:(id)position;	// 0x341dacc5
- (void)setCurlProblemTypes:(int *)types count:(unsigned)count;	// 0x341d6c39
// declared property setter: - (void)setDirectionsProblems:(id)problems;	// 0x341dadf5
// declared property setter: - (void)setDirectionsResponseID:(id)anId;	// 0x341dad25
- (void)setFeatureHandles:(XXStruct_3azwpD *)handles count:(unsigned)count;	// 0x341d7079
// declared property setter: - (void)setFeatureRegion:(id)region;	// 0x341dadd5
// declared property setter: - (void)setHasMapZoomLevel:(BOOL)level;	// 0x341d6845
// declared property setter: - (void)setHasPinType:(BOOL)type;	// 0x341d6da5
// declared property setter: - (void)setHasPreferredSearchResultIndex:(BOOL)index;	// 0x341d7219
// declared property setter: - (void)setHasProblematicSearchResultIndex:(BOOL)index;	// 0x341d71bd
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x341d6685
// declared property setter: - (void)setHttpInfo:(id)info;	// 0x341dabd5
// declared property setter: - (void)setIncorrectLabelTitle:(id)title;	// 0x341dad95
// declared property setter: - (void)setMapZoomLevel:(float)level;	// 0x341d681d
// declared property setter: - (void)setOriginalPlace:(id)place;	// 0x341dab51
// declared property setter: - (void)setPinDrop:(id)drop;	// 0x341dac85
- (void)setPinProblemTypes:(int *)types count:(unsigned)count;	// 0x341d6b31
// declared property setter: - (void)setPinType:(int)type;	// 0x341d6d7d
// declared property setter: - (void)setPlaceSearchRequest:(id)request;	// 0x341dace5
// declared property setter: - (void)setPlaceSearchResponse:(id)response;	// 0x341dad05
// declared property setter: - (void)setPreferredSearchDisplayLocation:(id)location;	// 0x341dae35
// declared property setter: - (void)setPreferredSearchResultIndex:(unsigned)index;	// 0x341d71f1
- (void)setProblemTypes:(int *)types count:(unsigned)count;	// 0x341d67a5
// declared property setter: - (void)setProblematicSearchResultIndex:(unsigned)index;	// 0x341d7195
// declared property setter: - (void)setRegion:(id)region;	// 0x341dabf5
// declared property setter: - (void)setSessionID:(XXStruct_t9EeIA)anId;	// 0x341d6645
// declared property setter: - (void)setSyslog:(id)syslog;	// 0x341dad55
// declared property setter: - (void)setTileStateLog:(id)log;	// 0x341dad75
// declared property setter: - (void)setViewportImages:(id)images;	// 0x341dac45
// declared property setter: - (void)setViewportInfo:(id)info;	// 0x341dac65
// declared property setter: - (void)setVisibleTileSets:(id)sets;	// 0x341dac25
// declared property getter: - (id)syslog;	// 0x341dad45
// declared property getter: - (id)tileStateLog;	// 0x341dad65
// declared property getter: - (id)viewportImages;	// 0x341dac35
- (id)viewportImagesAtIndex:(unsigned)index;	// 0x341d69f1
- (unsigned)viewportImagesCount;	// 0x341d69d1
// declared property getter: - (id)viewportInfo;	// 0x341dac55
- (id)visibleTileSetAtIndex:(unsigned)index;	// 0x341d6925
// declared property getter: - (id)visibleTileSets;	// 0x341dac15
- (unsigned)visibleTileSetsCount;	// 0x341d6905
- (void)writeTo:(id)to;	// 0x341d8b2d
@end
