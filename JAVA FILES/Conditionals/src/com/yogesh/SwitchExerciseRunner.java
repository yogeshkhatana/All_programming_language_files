package com.yogesh;

public class SwitchExerciseRunner {

	public static void main(String[] args) {
		System.out.println(determineNameOfDay(4));
		System.out.println(isWeek(3));
	}

	public static String determineNameOfDay(int dayNumber) {

		switch (dayNumber) {
		
		case 0:
			return "Sunday";

		case 1:
			return "Monday";

		case 2:
			return "Tuesday";

		case 3:
			return "Wednsday";

		case 4:
			return "Thursday";

		case 5:
			return "Friday";

		case 6:
			return "Saturday";

		

		}
		return "";
	}
		public static boolean isWeek(int dayNumber1)
		{
			switch(dayNumber1)
			{
			case 0:return false;
			case 1:return true;
			case 2:return true;
			case 3:return true;
			case 4:return true;
			case 5:return true;
			case 6:return false;
			}
			return false;
			
		}

	}

