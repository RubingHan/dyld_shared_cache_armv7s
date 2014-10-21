/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <ChatKit/MKMapViewDelegate.h>
#import <Social/SLPlaceDataSourceDelegate.h>

@protocol SLSheetPlaceViewControllerDelegate, SLPlaceDataSource;
@class NSArray, SLPlace, NSBundle, UITableView, UISearchBar, UISearchDisplayController, SLSheetPlaceSearchController, MKMapView, NSObject, ACAccount;

@interface SLSheetPlaceViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, MKMapViewDelegate, SLPlaceDataSourceDelegate> {

	NSArray* _places;
	SLPlace* _selectedPlace;
	NSBundle* _effectiveBundle;
	UITableView* _tableView;
	UISearchBar* _searchBar;
	UISearchDisplayController* _searchDisplayController;
	SLSheetPlaceSearchController* _placeSearchController;
	MKMapView* _mapView;
	bool _searchPresented;
	bool _searchAnimationComplete;
	double _mapHeight;
	bool _searchEnabled;
	NSObject<SLSheetPlaceViewControllerDelegate>* _selectionDelegate;
	ACAccount* _account;
	NSObject<SLPlaceDataSource>* _placeDataSource;

}

@property (__weak) NSObject<SLSheetPlaceViewControllerDelegate> * selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (assign,nonatomic) bool searchEnabled;                                                  //@synthesize searchEnabled=_searchEnabled - In the implementation block
@property (retain) ACAccount * account;                                                           //@synthesize account=_account - In the implementation block
@property (retain) NSObject<SLPlaceDataSource> * placeDataSource;                                 //@synthesize placeDataSource=_placeDataSource - In the implementation block
@property (@dynamic,retain) NSArray * places; 
-(void)setSearchEnabled:(bool)arg1 ;
-(void)placeManager:(id)arg1 failedWithError:(id)arg2 ;
-(void)placeManager:(id)arg1 updatedPlaces:(id)arg2 ;
-(void)_centerMapWithSelectedPlace:(id)arg1 ;
-(id)selectionDelegate;
-(double)_preferredViewHeight;
-(double)_mapHeightForInterfaceOrientation:(long long)arg1 ;
-(void)_layoutNormal;
-(void)_layoutForSearch;
-(void)_presentSearch;
-(id)placeDataSource;
-(void)_restoreFromSearch;
-(bool)searchEnabled;
-(bool)_forceSelectPlace:(id)arg1 setMapAnnotation:(bool)arg2 ;
-(void)_centerMapForPlaces;
-(id)places;
-(SCD_Struct_SL2)_regionForPlaces:(id)arg1 ;
-(void)setPlaces:(id)arg1 ;
-(id)_placeForRow:(long long)arg1 ;
-(id)initWithPlaceDataSource:(id)arg1 effectiveBundle:(id)arg2 ;
-(void)setSelectedPlace:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setSelectionDelegate:(id)arg1 ;
-(void)setPlaceDataSource:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(bool)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void).cxx_destruct;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
@end
