//
//  CityListTableViewController.h
//  WeatherCast
//
//  Created by long on 15/5/24.
//  Copyright (c) 2015年 long. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreLocation/CLLocationManagerDelegate.h>

@interface CityListTableViewController : UITableViewController<UIActionSheetDelegate, CLLocationManagerDelegate>

@end
