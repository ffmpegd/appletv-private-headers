/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTypeaheadPhraseAccumulatorChangeHandler.h"
#import "BRViewController.h"

@class ATVDataQuery, BRMediaMenuView, NSArray, ATVDataClient, NSTimer, NSString;

__attribute__((visibility("hidden")))
@interface BRDataQueryController : BRViewController <BRTypeaheadPhraseAccumulatorChangeHandler> {
	id _serverID;	// 104 = 0x68
	unsigned _dataClientType;	// 108 = 0x6c
	ATVDataClient *_dataClient;	// 112 = 0x70
	BRMediaMenuView *_mediaMenuView;	// 116 = 0x74
	NSArray *_data;	// 120 = 0x78
	ATVDataQuery *_preDataQuery;	// 124 = 0x7c
	ATVDataQuery *_dataQuery;	// 128 = 0x80
	ATVDataQuery *_previewQuery;	// 132 = 0x84
	ATVDataQuery *_queueQuery;	// 136 = 0x88
	NSTimer *_spinnerTimer;	// 140 = 0x8c
	BOOL _showingSpinner;	// 144 = 0x90
	void *_dataItemToSelect;	// 148 = 0x94
	ATVDataQuery *_playQuery;	// 152 = 0x98
	BOOL _handlingDataClientUpdate;	// 156 = 0x9c
	BOOL _reloadListViewNeeded;	// 157 = 0x9d
	NSTimer *_serverFoundWaitTimer;	// 160 = 0xa0
	BOOL attemptConnectionOnServerRemove;	// 164 = 0xa4
	BOOL _refreshNeeded;	// 165 = 0xa5
	BOOL _popToRootWhenExhumed;	// 166 = 0xa6
	NSString *_spinnerLoadingText;	// 168 = 0xa8
	unsigned _updateDataClientTypes;	// 172 = 0xac
}
@property(assign, nonatomic) BOOL attemptConnectionOnServerRemove;	// G=0x329651; S=0x329661; @synthesize
@property(readonly, retain) NSArray *data;	// G=0x328ae1; converted property
@property(readonly, assign, nonatomic) ATVDataClient *dataClient;	// G=0x328b21; @synthesize=_dataClient
@property(readonly, assign) unsigned dataClientType;	// G=0x328b11; converted property
@property(assign) void *dataItemToSelect;	// G=0x328bcd; S=0x328ba1; converted property
@property(readonly, assign, nonatomic) BOOL isProcessingQuery;	// G=0x32837d; 
@property(readonly, retain) BRMediaMenuView *mediaMenuView;	// G=0x328ad1; converted property
@property(assign, nonatomic) BOOL popToRootWhenExhumed;	// G=0x3296c1; S=0x3296d1; @synthesize=_popToRootWhenExhumed
@property(readonly, assign, nonatomic) BOOL refreshNeeded;	// G=0x3296b1; @synthesize=_refreshNeeded
@property(readonly, retain) id serverID;	// G=0x328b01; converted property
@property(retain, nonatomic) NSString *spinnerLoadingText;	// G=0x329671; S=0x329681; @synthesize=_spinnerLoadingText
@property(assign, nonatomic) unsigned updateDataClientTypes;	// G=0x329691; S=0x3296a1; @synthesize=_updateDataClientTypes
+ (id)controllerForATVMediaType:(id)atvmediaType collection:(id)collection dataClient:(id)client dataClientType:(unsigned)type playAllItems:(BOOL)items;	// 0x327fc1
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned)type;	// 0x327ffd
- (id)initWithServerID:(id)serverID dataClientType:(unsigned)type;	// 0x327fc5
- (void)_dataClientConnectionHandler:(id)handler;	// 0x32ac11
- (void)_dataClientConnectionHandlerWithObject:(id)object;	// 0x32aa85
- (void)_dataClientDataUpdated:(id)updated;	// 0x32b029
- (void)_dataClientStatusChanged:(id)changed;	// 0x32af99
- (void)_dataQueryComplete;	// 0x32a3b1
- (void)_dataServerConnectionHandler:(id)handler;	// 0x32ae5d
- (void)_dataServerFailedToConnect:(id)connect;	// 0x32aedd
- (void)_dataServersChangedHandler:(id)handler;	// 0x32b1fd
- (void)_displayErrorForQuery:(id)query;	// 0x32a011
- (void)_displayFailedToConnect;	// 0x32a189
- (void)_executeDataQuery;	// 0x32a649
- (void)_executePreDataQuery;	// 0x32a51d
- (void)_handleDataQueryCompletion;	// 0x3297d5
- (BOOL)_isDataServerEqual:(id)equal;	// 0x32b605
- (void)_mediaItemPropertySetNotification:(id)notification;	// 0x32b165
- (void)_playQueryComplete;	// 0x32a475
- (void)_preDataQueryComplete;	// 0x32a2a1
- (void)_previewQueryComplete;	// 0x32a419
- (void)_serverFoundWaitHandler:(id)handler;	// 0x32b6ed
- (void)_setDataClient:(id)client;	// 0x329e9d
- (void)_setDataQuery:(id)query;	// 0x32a895
- (void)_setPlayQuery:(id)query;	// 0x32a92d
- (void)_setPreDataQuery:(id)query;	// 0x32a849
- (void)_setPreviewQuery:(id)query;	// 0x32a8e1
- (void)_setQueueQuery:(id)query;	// 0x32a979
- (void)_setServerID:(id)anId dataClientType:(unsigned)type;	// 0x329dad
- (void)_showMediaView;	// 0x32a4cd
- (void)_showSpinner:(BOOL)spinner;	// 0x329c01
- (void)_showSpinner:(BOOL)spinner delay:(BOOL)delay displayLoadingText:(BOOL)text;	// 0x3296e1
- (void)_showSpinnerTimer:(id)timer;	// 0x329bc1
- (void)_updateDisabledStateForMenusInList:(id)list;	// 0x329979
- (id)accessibilityScreenContent;	// 0x3291f9
// declared property getter: - (BOOL)attemptConnectionOnServerRemove;	// 0x329651
- (void)controlWasActivated;	// 0x329231
- (void)controlWasDeactivated;	// 0x32928d
- (id)controllerIdentifier;	// 0x32a9ed
- (id)currentItems;	// 0x328af1
// converted property getter: - (id)data;	// 0x328ae1
// declared property getter: - (id)dataClient;	// 0x328b21
- (id)dataClientName;	// 0x328b31
// converted property getter: - (unsigned)dataClientType;	// 0x328b11
- (BOOL)dataClientUpdated:(id)updated;	// 0x32aa4d
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x32a9e9
// converted property getter: - (void *)dataItemToSelect;	// 0x328bcd
- (BOOL)dataQueryComplete:(id)complete;	// 0x32a9d1
- (id)dataServer;	// 0x328b61
- (BOOL)dataServerConnectionChanged:(id)changed;	// 0x32aa81
- (void)dealloc;	// 0x328175
- (id)defaultIndexPathToSelect;	// 0x32a9d9
- (id)errorControlForQuery:(id)query;	// 0x32aa45
- (id)errorForNoContent;	// 0x32aa25
- (BOOL)handleUpdateNotification:(id)notification;	// 0x32a9d5
- (id)identifier;	// 0x32835d
- (id)indexPathForDataItem:(void *)dataItem;	// 0x32a9e5
// declared property getter: - (BOOL)isProcessingQuery;	// 0x32837d
- (BOOL)isQueryResultValid:(id)valid;	// 0x32aa51
- (unsigned)itemIndexForPhrase:(id)phrase inItems:(id)items;	// 0x3292e9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x328be5
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x328f85
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x328be1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x328bdd
// converted property getter: - (id)mediaMenuView;	// 0x328ad1
- (id)newDataQuery;	// 0x32a9cd
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x32aa1d
- (id)newPreDataQuery;	// 0x32a9c5
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x32a9dd
- (void)playQueryComplete:(id)complete;	// 0x32aa21
// declared property getter: - (BOOL)popToRootWhenExhumed;	// 0x3296c1
- (BOOL)preDataQueryComplete:(id)complete;	// 0x32a9c9
- (id)previewForItems:(id)items;	// 0x329129
- (BOOL)previewQueryComplete:(id)complete;	// 0x32a9e1
// declared property getter: - (BOOL)refreshNeeded;	// 0x3296b1
- (void)resolveQueueQueryForSelectedItemWithAction:(int)action;	// 0x328d19
- (void)restartDataQueryProcess;	// 0x3290f9
// converted property getter: - (id)serverID;	// 0x328b01
// declared property setter: - (void)setAttemptConnectionOnServerRemove:(BOOL)remove;	// 0x329661
// converted property setter: - (void)setDataItemToSelect:(void *)select;	// 0x328ba1
// declared property setter: - (void)setPopToRootWhenExhumed:(BOOL)rootWhenExhumed;	// 0x3296d1
// declared property setter: - (void)setSpinnerLoadingText:(id)text;	// 0x329681
// declared property setter: - (void)setUpdateDataClientTypes:(unsigned)types;	// 0x3296a1
// declared property getter: - (id)spinnerLoadingText;	// 0x329671
- (BOOL)typeaheadPhraseAccumulator:(id)accumulator phraseChanged:(id)changed;	// 0x329595
- (id)typeaheadPropertyName;	// 0x32963d
- (int)typeaheadSelectionOffset;	// 0x32964d
// declared property getter: - (unsigned)updateDataClientTypes;	// 0x329691
- (id)waitControl;	// 0x32aa49
- (void)wasExhumed;	// 0x3289cd
- (void)wasPopped;	// 0x3288ad
- (void)wasPushed;	// 0x3283ad
@end

