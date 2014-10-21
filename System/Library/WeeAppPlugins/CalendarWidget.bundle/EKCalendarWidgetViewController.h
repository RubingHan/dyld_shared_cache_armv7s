/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/WeeAppPlugins/CalendarWidget.bundle/CalendarWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarWidget/CalendarWidget-Structs.h>
#import <SpringBoardUIServices/_SBUIWidgetViewController.h>
#import <EventKitUI/EKDayViewDataSource.h>
#import <EventKitUI/EKDayViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class UIView, UIButton, EKDayView, UITableView, EKEventStore, NSObject, CalendarOccurrencesCollection, UILabel, NSMutableDictionary;

@interface EKCalendarWidgetViewController : _SBUIWidgetViewController <EKDayViewDataSource, EKDayViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	UIView* _contentView;
	UIButton* _debugRefreshButton;
	long long __shouldShowAsListView;
	EKDayView* _dayView;
	UITableView* _listView;
	EKEventStore* _eventStore;
	NSObject<OS_dispatch_queue>* _eventLoadingQueue;
	NSObject<OS_dispatch_queue>* _eventStoreQueue;
	NSObject<OS_dispatch_source>* _eventStoreIdleTimerSource;
	bool _needsReload;
	bool _viewIsVisible;
	CalendarOccurrencesCollection* _loadedEventCollection;
	CGRect _lastSeenFrame;
	UILabel* _noEventsLabel;
	EKDayView* _noEventsGridBackground;
	CGSize _listViewSize;
	NSMutableDictionary* _cachedListViewCells;

}
-(id)_selectedCalendars;
-(void)_killEventStoreIdleTimer;
-(id)_eventStore;
-(void)_localeChanged;
-(id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(void)dayView:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2 ;
-(void)loadView;
-(void).cxx_destruct;
-(void)_significantTimeChange:(id)arg1 ;
-(CGSize)preferredViewSize;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)_shouldShowAsListViewChanged;
-(id)_currentDateComponents;
-(void)_updateTimeMarkerState;
-(unsigned long long)_visibleSecondForHour:(unsigned long long)arg1 ;
-(void)_setNoEventsLabelShowsEmptyString;
-(bool)_shouldShowAsListView;
-(id)_listView;
-(id)_dayView;
-(void)_showNoEventsLabel;
-(double)_viewWidth;
-(double)_preferredListViewHeight;
-(NSRange)_displayedHoursRange;
-(void)_scrollDayViewTopEdgeToHour:(unsigned long long)arg1 ;
-(void)_setTimeViewHourRangeToRender:(NSRange)arg1 ;
-(id)_noEventsLabel;
-(double)_preferredNoEventsViewHeight;
-(id)_noEventsGridBackground;
-(void)_eventFetchCompleted;
-(void)_refreshTodayViewWhenViewIsVisible;
-(id)_dayContentView;
-(void)_startEventStoreIdleTimer;
-(void)_refreshTodayView;
-(void)_resetView;
-(void)_setNoEventsLabelShowsLoading;
-(void)_reloadEvents;
-(void)_fetchUpcomingOccurrences;
-(void)_setViewStatesForCachedEventCollection;
-(id)_fetchedVisibleOccurences;
-(void)_setNoEventsLabelShowsNoEvents;
-(void)_setShowingNoEventsMode:(bool)arg1 ;
-(void)_relayoutDayViewOccurrences;
-(void)_reloadListViewData;
-(void)_cleanupFetchDerivedData;
-(void)_hideNoEventsLabel;
-(void)_stopHoldingDayContentViews;
-(id)_now;
-(id)_startOfViewedTimeSpanWithOccurrences:(id)arg1 ;
-(id)_endOfViewedTimeSpanWithOccurrences:(id)arg1 ;
-(NSRange)_rangeLimitedToMidnight:(NSRange)arg1 ;
-(id)_eventsSortedByEarliestStartFirst:(id)arg1 ;
-(id)_eventsSortedByFarthestEndLast:(id)arg1 ;
-(void)_databaseDidChange;
-(void)_occurrenceCacheDidChange;
-(void)_selectedCalendarsDidChange;
-(void)_debugRefreshButtonPushed;
@end
